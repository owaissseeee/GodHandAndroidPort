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

// Function: func_0018ADA8
// Address: 0x18ada8 - 0x18aff8
void func_0018ADA8_0x18ada8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018ADA8_0x18ada8");
#endif

    switch (ctx->pc) {
        case 0x18ae78u: goto label_18ae78;
        case 0x18ae98u: goto label_18ae98;
        case 0x18aeb8u: goto label_18aeb8;
        case 0x18aeccu: goto label_18aecc;
        case 0x18aee0u: goto label_18aee0;
        case 0x18aef4u: goto label_18aef4;
        case 0x18af64u: goto label_18af64;
        case 0x18af70u: goto label_18af70;
        case 0x18af7cu: goto label_18af7c;
        case 0x18af8cu: goto label_18af8c;
        case 0x18af98u: goto label_18af98;
        case 0x18afa4u: goto label_18afa4;
        case 0x18afccu: goto label_18afcc;
        default: break;
    }

    ctx->pc = 0x18ada8u;

    // 0x18ada8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18ada8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18adac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18adacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18adb0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x18adb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x18adb4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x18adb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x18adb8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18adb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18adbc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x18adbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x18adc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18adc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18adc4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x18adc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x18adc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18adc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18adcc: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x18adccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x18add0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x18add0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x18add4: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x18add4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18add8: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x18ADD8u;
    {
        const bool branch_taken_0x18add8 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ADD8u;
        // 0x18addc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18add8) {
            ctx->pc = 0x18ADE4u;
            goto label_18ade4;
        }
    }
    ctx->pc = 0x18ADE0u;
    // 0x18ade0: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x18ade0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18ade4:
    // 0x18ade4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18ade4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18ade8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18ADE8u;
    {
        const bool branch_taken_0x18ade8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ADE8u;
        // 0x18adec: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ade8) {
            ctx->pc = 0x18AE00u;
            goto label_18ae00;
        }
    }
    ctx->pc = 0x18ADF0u;
    // 0x18adf0: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18adf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18adf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18ADF8u;
    {
        const bool branch_taken_0x18adf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ADF8u;
        // 0x18adfc: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18adf8) {
            ctx->pc = 0x18AE04u;
            goto label_18ae04;
        }
    }
    ctx->pc = 0x18AE00u;
label_18ae00:
    // 0x18ae00: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18ae00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ae04:
    // 0x18ae04: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x18ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x18ae08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18ae08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae0c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18ae0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x18ae10: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x18ae10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x18ae14: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x18ae14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18ae18: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AE18u;
    {
        const bool branch_taken_0x18ae18 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE18u;
        // 0x18ae1c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae18) {
            ctx->pc = 0x18AE28u;
            goto label_18ae28;
        }
    }
    ctx->pc = 0x18AE20u;
    // 0x18ae20: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x18ae20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18ae24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ae24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ae28:
    // 0x18ae28: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18ae28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18ae2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18AE2Cu;
    {
        const bool branch_taken_0x18ae2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE2Cu;
        // 0x18ae30: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae2c) {
            ctx->pc = 0x18AE44u;
            goto label_18ae44;
        }
    }
    ctx->pc = 0x18AE34u;
    // 0x18ae34: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18ae38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ae3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18AE3Cu;
    {
        const bool branch_taken_0x18ae3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE3Cu;
        // 0x18ae40: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae3c) {
            ctx->pc = 0x18AE48u;
            goto label_18ae48;
        }
    }
    ctx->pc = 0x18AE44u;
label_18ae44:
    // 0x18ae44: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18ae44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ae48:
    // 0x18ae48: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x18ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x18ae4c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x18ae4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x18ae50: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x18ae50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x18ae54: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x18ae54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18ae58: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18ae58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18ae5c: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x18ae5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18ae60: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18ae60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18ae64: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x18ae64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x18ae68: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18ae68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18ae6c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x18ae6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x18ae70: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18AE70u;
    SET_GPR_U32(ctx, 31, 0x18AE78u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18AE70u, 0x18AE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AE78u;
label_18ae78:
    // 0x18ae78: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x18ae78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ae7c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x18ae7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18ae80: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x18ae80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x18ae84: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18ae84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18ae88: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18ae88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18ae8c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18ae8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18ae90: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x18AE90u;
    SET_GPR_U32(ctx, 31, 0x18AE98u);
    ctx->pc = 0x18AE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AE90u;
    // 0x18ae94: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x18AE90u, 0x18AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AE98u;
label_18ae98:
    // 0x18ae98: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x18ae98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x18ae9c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18ae9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18aea0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18aea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18aea4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x18aea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18aea8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18aea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x18aeac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18aeacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18aeb0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18AEB0u;
    SET_GPR_U32(ctx, 31, 0x18AEB8u);
    ctx->pc = 0x18AEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AEB0u;
    // 0x18aeb4: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18AEB0u, 0x18AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AEB8u;
label_18aeb8:
    // 0x18aeb8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x18aeb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18aebc: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x18aebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18aec0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18aec0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18aec4: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18AEC4u;
    SET_GPR_U32(ctx, 31, 0x18AECCu);
    ctx->pc = 0x18AEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AEC4u;
    // 0x18aec8: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18AEC4u, 0x18AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AECCu;
label_18aecc:
    // 0x18aecc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18aeccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18aed0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x18aed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18aed4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18aed4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18aed8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18AED8u;
    SET_GPR_U32(ctx, 31, 0x18AEE0u);
    ctx->pc = 0x18AEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AED8u;
    // 0x18aedc: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18AED8u, 0x18AEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AEE0u;
label_18aee0:
    // 0x18aee0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18aee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18aee4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x18aee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18aee8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18aee8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18aeec: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18AEECu;
    SET_GPR_U32(ctx, 31, 0x18AEF4u);
    ctx->pc = 0x18AEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AEECu;
    // 0x18aef0: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18AEECu, 0x18AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AEF4u;
label_18aef4:
    // 0x18aef4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18aef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18aef8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x18aef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18aefc: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x18aefcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18af00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18af00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af04: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18af04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18af08: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x18af08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x18af0c: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x18AF0Cu;
    {
        const bool branch_taken_0x18af0c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF0Cu;
        // 0x18af10: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af0c) {
            ctx->pc = 0x18AF18u;
            goto label_18af18;
        }
    }
    ctx->pc = 0x18AF14u;
    // 0x18af14: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x18af14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18af18:
    // 0x18af18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18af18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18af1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18AF1Cu;
    {
        const bool branch_taken_0x18af1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF1Cu;
        // 0x18af20: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af1c) {
            ctx->pc = 0x18AF34u;
            goto label_18af34;
        }
    }
    ctx->pc = 0x18AF24u;
    // 0x18af24: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18af24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18af28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18af28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18af2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18AF2Cu;
    {
        const bool branch_taken_0x18af2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF2Cu;
        // 0x18af30: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af2c) {
            ctx->pc = 0x18AF38u;
            goto label_18af38;
        }
    }
    ctx->pc = 0x18AF34u;
label_18af34:
    // 0x18af34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18af34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18af38:
    // 0x18af38: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x18af38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x18af3c: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x18af3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x18af40: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x18af40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18af44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18af44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18af48: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x18af48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x18af4c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18af4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18af50: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18af50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18af54: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x18af54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18af58: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x18af58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x18af5c: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x18AF5Cu;
    SET_GPR_U32(ctx, 31, 0x18AF64u);
    ctx->pc = 0x18AF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AF5Cu;
    // 0x18af60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x18AF5Cu, 0x18AF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF64u;
label_18af64:
    // 0x18af64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18af64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af68: 0xc05ce66  jal         func_173998
    ctx->pc = 0x18AF68u;
    SET_GPR_U32(ctx, 31, 0x18AF70u);
    ctx->pc = 0x18AF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AF68u;
    // 0x18af6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x18AF68u, 0x18AF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF70u;
label_18af70:
    // 0x18af70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18af70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af74: 0xc051f18  jal         func_147C60
    ctx->pc = 0x18AF74u;
    SET_GPR_U32(ctx, 31, 0x18AF7Cu);
    ctx->pc = 0x18AF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AF74u;
    // 0x18af78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x18AF74u, 0x18AF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF7Cu;
label_18af7c:
    // 0x18af7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18af7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18af80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af84: 0xc051f22  jal         func_147C88
    ctx->pc = 0x18AF84u;
    SET_GPR_U32(ctx, 31, 0x18AF8Cu);
    ctx->pc = 0x18AF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AF84u;
    // 0x18af88: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x18AF84u, 0x18AF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF8Cu;
label_18af8c:
    // 0x18af8c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x18af8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18af90: 0xc05ce42  jal         func_173908
    ctx->pc = 0x18AF90u;
    SET_GPR_U32(ctx, 31, 0x18AF98u);
    ctx->pc = 0x18AF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AF90u;
    // 0x18af94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x18AF90u, 0x18AF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF98u;
label_18af98:
    // 0x18af98: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x18af98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18af9c: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x18AF9Cu;
    SET_GPR_U32(ctx, 31, 0x18AFA4u);
    ctx->pc = 0x18AFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AF9Cu;
    // 0x18afa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x18AF9Cu, 0x18AFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFA4u;
label_18afa4:
    // 0x18afa4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18afa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18afa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18afa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18afac: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x18afacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18afb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18afb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18afb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18afb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18afb8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x18afb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x18afbc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x18afbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x18afc0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x18afc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18afc4: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x18AFC4u;
    SET_GPR_U32(ctx, 31, 0x18AFCCu);
    ctx->pc = 0x18AFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AFC4u;
    // 0x18afc8: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x18AFC4u, 0x18AFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFCCu;
label_18afcc:
    // 0x18afcc: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x18afccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x18afd0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x18afd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18afd4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x18afd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18afd8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x18afd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18afdc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x18afdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18afe0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18afe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18afe4: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x18afe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18afe8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x18afe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18afec: 0x3e00008  jr          $ra
    ctx->pc = 0x18AFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AFECu;
        // 0x18aff0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AFF4u;
    // 0x18aff4: 0x0  nop
    ctx->pc = 0x18aff4u;
    // NOP
    ctx->pc = 0x18aff8u;
}
