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

// Function: func_0018BAC0
// Address: 0x18bac0 - 0x18bd10
void func_0018BAC0_0x18bac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018BAC0_0x18bac0");
#endif

    switch (ctx->pc) {
        case 0x18bb90u: goto label_18bb90;
        case 0x18bbb0u: goto label_18bbb0;
        case 0x18bbd0u: goto label_18bbd0;
        case 0x18bbe4u: goto label_18bbe4;
        case 0x18bbf8u: goto label_18bbf8;
        case 0x18bc0cu: goto label_18bc0c;
        case 0x18bc7cu: goto label_18bc7c;
        case 0x18bc88u: goto label_18bc88;
        case 0x18bc94u: goto label_18bc94;
        case 0x18bca4u: goto label_18bca4;
        case 0x18bcb0u: goto label_18bcb0;
        case 0x18bcbcu: goto label_18bcbc;
        case 0x18bce4u: goto label_18bce4;
        default: break;
    }

    ctx->pc = 0x18bac0u;

    // 0x18bac0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18bac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18bac4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18bac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bac8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x18bac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x18bacc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x18baccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x18bad0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18bad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bad4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x18bad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x18bad8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18bad8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18badc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x18badcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x18bae0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18bae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18bae4: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x18bae4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x18bae8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x18bae8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x18baec: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x18baecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18baf0: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x18BAF0u;
    {
        const bool branch_taken_0x18baf0 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BAF0u;
        // 0x18baf4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18baf0) {
            ctx->pc = 0x18BAFCu;
            goto label_18bafc;
        }
    }
    ctx->pc = 0x18BAF8u;
    // 0x18baf8: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x18baf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18bafc:
    // 0x18bafc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18bafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18bb00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BB00u;
    {
        const bool branch_taken_0x18bb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB00u;
        // 0x18bb04: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb00) {
            ctx->pc = 0x18BB18u;
            goto label_18bb18;
        }
    }
    ctx->pc = 0x18BB08u;
    // 0x18bb08: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18bb0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18bb10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18BB10u;
    {
        const bool branch_taken_0x18bb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB10u;
        // 0x18bb14: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb10) {
            ctx->pc = 0x18BB1Cu;
            goto label_18bb1c;
        }
    }
    ctx->pc = 0x18BB18u;
label_18bb18:
    // 0x18bb18: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18bb18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bb1c:
    // 0x18bb1c: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x18bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x18bb20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18bb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bb24: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18bb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x18bb28: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x18bb28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x18bb2c: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x18bb2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18bb30: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18BB30u;
    {
        const bool branch_taken_0x18bb30 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB30u;
        // 0x18bb34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb30) {
            ctx->pc = 0x18BB40u;
            goto label_18bb40;
        }
    }
    ctx->pc = 0x18BB38u;
    // 0x18bb38: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x18bb38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18bb3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18bb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bb40:
    // 0x18bb40: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18bb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18bb44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BB44u;
    {
        const bool branch_taken_0x18bb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB44u;
        // 0x18bb48: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb44) {
            ctx->pc = 0x18BB5Cu;
            goto label_18bb5c;
        }
    }
    ctx->pc = 0x18BB4Cu;
    // 0x18bb4c: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18bb50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18bb54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18BB54u;
    {
        const bool branch_taken_0x18bb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB54u;
        // 0x18bb58: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb54) {
            ctx->pc = 0x18BB60u;
            goto label_18bb60;
        }
    }
    ctx->pc = 0x18BB5Cu;
label_18bb5c:
    // 0x18bb5c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18bb5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bb60:
    // 0x18bb60: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x18bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x18bb64: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x18bb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x18bb68: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x18bb68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x18bb6c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x18bb6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18bb70: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18bb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18bb74: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x18bb74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18bb78: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18bb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18bb7c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x18bb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x18bb80: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18bb80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18bb84: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x18bb84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x18bb88: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18BB88u;
    SET_GPR_U32(ctx, 31, 0x18BB90u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18BB88u, 0x18BB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB90u;
label_18bb90:
    // 0x18bb90: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x18bb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bb94: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x18bb94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18bb98: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x18bb98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x18bb9c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18bb9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18bba0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18bba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18bba4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18bba4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18bba8: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x18BBA8u;
    SET_GPR_U32(ctx, 31, 0x18BBB0u);
    ctx->pc = 0x18BBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BBA8u;
    // 0x18bbac: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x18BBA8u, 0x18BBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BBB0u;
label_18bbb0:
    // 0x18bbb0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x18bbb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x18bbb4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18bbb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18bbb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18bbb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18bbbc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x18bbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bbc0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18bbc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x18bbc4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18bbc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18bbc8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18BBC8u;
    SET_GPR_U32(ctx, 31, 0x18BBD0u);
    ctx->pc = 0x18BBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BBC8u;
    // 0x18bbcc: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18BBC8u, 0x18BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BBD0u;
label_18bbd0:
    // 0x18bbd0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x18bbd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18bbd4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x18bbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bbd8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18bbd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18bbdc: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18BBDCu;
    SET_GPR_U32(ctx, 31, 0x18BBE4u);
    ctx->pc = 0x18BBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BBDCu;
    // 0x18bbe0: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18BBDCu, 0x18BBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BBE4u;
label_18bbe4:
    // 0x18bbe4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18bbe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18bbe8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x18bbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bbec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18bbecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18bbf0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18BBF0u;
    SET_GPR_U32(ctx, 31, 0x18BBF8u);
    ctx->pc = 0x18BBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BBF0u;
    // 0x18bbf4: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18BBF0u, 0x18BBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BBF8u;
label_18bbf8:
    // 0x18bbf8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18bbf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18bbfc: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x18bbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bc00: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18bc00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18bc04: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18BC04u;
    SET_GPR_U32(ctx, 31, 0x18BC0Cu);
    ctx->pc = 0x18BC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC04u;
    // 0x18bc08: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18BC04u, 0x18BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC0Cu;
label_18bc0c:
    // 0x18bc0c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18bc0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18bc10: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x18bc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bc14: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x18bc14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18bc18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18bc18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc1c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18bc1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18bc20: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x18bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x18bc24: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x18BC24u;
    {
        const bool branch_taken_0x18bc24 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC24u;
        // 0x18bc28: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc24) {
            ctx->pc = 0x18BC30u;
            goto label_18bc30;
        }
    }
    ctx->pc = 0x18BC2Cu;
    // 0x18bc2c: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x18bc2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18bc30:
    // 0x18bc30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18bc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18bc34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BC34u;
    {
        const bool branch_taken_0x18bc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC34u;
        // 0x18bc38: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc34) {
            ctx->pc = 0x18BC4Cu;
            goto label_18bc4c;
        }
    }
    ctx->pc = 0x18BC3Cu;
    // 0x18bc3c: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18bc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18bc40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18bc44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18BC44u;
    {
        const bool branch_taken_0x18bc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC44u;
        // 0x18bc48: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc44) {
            ctx->pc = 0x18BC50u;
            goto label_18bc50;
        }
    }
    ctx->pc = 0x18BC4Cu;
label_18bc4c:
    // 0x18bc4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18bc4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bc50:
    // 0x18bc50: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x18bc50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x18bc54: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x18bc54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x18bc58: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x18bc58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18bc5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18bc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18bc60: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x18bc60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x18bc64: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18bc64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18bc68: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18bc68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18bc6c: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x18bc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18bc70: 0x26100660  addiu       $s0, $s0, 0x660
    ctx->pc = 0x18bc70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    // 0x18bc74: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x18BC74u;
    SET_GPR_U32(ctx, 31, 0x18BC7Cu);
    ctx->pc = 0x18BC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC74u;
    // 0x18bc78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x18BC74u, 0x18BC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC7Cu;
label_18bc7c:
    // 0x18bc7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18bc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc80: 0xc05ce66  jal         func_173998
    ctx->pc = 0x18BC80u;
    SET_GPR_U32(ctx, 31, 0x18BC88u);
    ctx->pc = 0x18BC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC80u;
    // 0x18bc84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x18BC80u, 0x18BC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC88u;
label_18bc88:
    // 0x18bc88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18bc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc8c: 0xc051f18  jal         func_147C60
    ctx->pc = 0x18BC8Cu;
    SET_GPR_U32(ctx, 31, 0x18BC94u);
    ctx->pc = 0x18BC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC8Cu;
    // 0x18bc90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x18BC8Cu, 0x18BC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC94u;
label_18bc94:
    // 0x18bc94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18bc94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18bc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc9c: 0xc051f22  jal         func_147C88
    ctx->pc = 0x18BC9Cu;
    SET_GPR_U32(ctx, 31, 0x18BCA4u);
    ctx->pc = 0x18BCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC9Cu;
    // 0x18bca0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x18BC9Cu, 0x18BCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BCA4u;
label_18bca4:
    // 0x18bca4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x18bca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18bca8: 0xc05ce42  jal         func_173908
    ctx->pc = 0x18BCA8u;
    SET_GPR_U32(ctx, 31, 0x18BCB0u);
    ctx->pc = 0x18BCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BCA8u;
    // 0x18bcac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x18BCA8u, 0x18BCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BCB0u;
label_18bcb0:
    // 0x18bcb0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x18bcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18bcb4: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x18BCB4u;
    SET_GPR_U32(ctx, 31, 0x18BCBCu);
    ctx->pc = 0x18BCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BCB4u;
    // 0x18bcb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x18BCB4u, 0x18BCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BCBCu;
label_18bcbc:
    // 0x18bcbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18bcbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18bcc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18bcc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bcc4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x18bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18bcc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18bcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bccc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18bcccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bcd0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x18bcd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x18bcd4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x18bcd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x18bcd8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x18bcd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18bcdc: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x18BCDCu;
    SET_GPR_U32(ctx, 31, 0x18BCE4u);
    ctx->pc = 0x18BCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BCDCu;
    // 0x18bce0: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x18BCDCu, 0x18BCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BCE4u;
label_18bce4:
    // 0x18bce4: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x18bce4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x18bce8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x18bce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18bcec: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x18bcecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18bcf0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x18bcf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18bcf4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x18bcf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18bcf8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18bcf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18bcfc: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x18bcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18bd00: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x18bd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18bd04: 0x3e00008  jr          $ra
    ctx->pc = 0x18BD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BD04u;
        // 0x18bd08: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BD0Cu;
    // 0x18bd0c: 0x0  nop
    ctx->pc = 0x18bd0cu;
    // NOP
    ctx->pc = 0x18bd10u;
}
