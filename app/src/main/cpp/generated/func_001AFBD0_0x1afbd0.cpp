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

// Function: func_001AFBD0
// Address: 0x1afbd0 - 0x1afe10
void func_001AFBD0_0x1afbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AFBD0_0x1afbd0");
#endif

    switch (ctx->pc) {
        case 0x1afca0u: goto label_1afca0;
        case 0x1afcc0u: goto label_1afcc0;
        case 0x1afcd4u: goto label_1afcd4;
        case 0x1afce8u: goto label_1afce8;
        case 0x1afcfcu: goto label_1afcfc;
        case 0x1afd10u: goto label_1afd10;
        case 0x1afd80u: goto label_1afd80;
        case 0x1afd8cu: goto label_1afd8c;
        case 0x1afd98u: goto label_1afd98;
        case 0x1afda8u: goto label_1afda8;
        case 0x1afdb4u: goto label_1afdb4;
        case 0x1afdc0u: goto label_1afdc0;
        case 0x1afde8u: goto label_1afde8;
        default: break;
    }

    ctx->pc = 0x1afbd0u;

    // 0x1afbd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1afbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1afbd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1afbd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afbd8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1afbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1afbdc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1afbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1afbe0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1afbe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afbe4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1afbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1afbe8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1afbe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afbec: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1afbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1afbf0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1afbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1afbf4: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1afbf4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1afbf8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1afbf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1afbfc: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1afbfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1afc00: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFC00u;
    {
        const bool branch_taken_0x1afc00 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1AFC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC00u;
        // 0x1afc04: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc00) {
            ctx->pc = 0x1AFC0Cu;
            goto label_1afc0c;
        }
    }
    ctx->pc = 0x1AFC08u;
    // 0x1afc08: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1afc08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1afc0c:
    // 0x1afc0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1afc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1afc10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFC10u;
    {
        const bool branch_taken_0x1afc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC10u;
        // 0x1afc14: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc10) {
            ctx->pc = 0x1AFC28u;
            goto label_1afc28;
        }
    }
    ctx->pc = 0x1AFC18u;
    // 0x1afc18: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1afc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1afc1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1afc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1afc20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFC20u;
    {
        const bool branch_taken_0x1afc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC20u;
        // 0x1afc24: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc20) {
            ctx->pc = 0x1AFC2Cu;
            goto label_1afc2c;
        }
    }
    ctx->pc = 0x1AFC28u;
label_1afc28:
    // 0x1afc28: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1afc28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afc2c:
    // 0x1afc2c: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1afc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1afc30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1afc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afc34: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1afc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1afc38: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1afc38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1afc3c: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x1afc3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1afc40: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFC40u;
    {
        const bool branch_taken_0x1afc40 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1AFC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC40u;
        // 0x1afc44: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc40) {
            ctx->pc = 0x1AFC50u;
            goto label_1afc50;
        }
    }
    ctx->pc = 0x1AFC48u;
    // 0x1afc48: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1afc48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1afc4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1afc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1afc50:
    // 0x1afc50: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1afc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1afc54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFC54u;
    {
        const bool branch_taken_0x1afc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC54u;
        // 0x1afc58: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc54) {
            ctx->pc = 0x1AFC6Cu;
            goto label_1afc6c;
        }
    }
    ctx->pc = 0x1AFC5Cu;
    // 0x1afc5c: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1afc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1afc60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1afc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1afc64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFC64u;
    {
        const bool branch_taken_0x1afc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC64u;
        // 0x1afc68: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc64) {
            ctx->pc = 0x1AFC70u;
            goto label_1afc70;
        }
    }
    ctx->pc = 0x1AFC6Cu;
label_1afc6c:
    // 0x1afc6c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1afc6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afc70:
    // 0x1afc70: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1afc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1afc74: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1afc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1afc78: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1afc78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1afc7c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1afc7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1afc80: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1afc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1afc84: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1afc84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1afc88: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1afc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1afc8c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1afc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1afc90: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1afc90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1afc94: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1afc94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1afc98: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1AFC98u;
    SET_GPR_U32(ctx, 31, 0x1AFCA0u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1AFC98u, 0x1AFCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFCA0u;
label_1afca0:
    // 0x1afca0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1afca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afca4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1afca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1afca8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1afca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1afcac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1afcacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1afcb0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1afcb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1afcb4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1afcb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1afcb8: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x1AFCB8u;
    SET_GPR_U32(ctx, 31, 0x1AFCC0u);
    ctx->pc = 0x1AFCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFCB8u;
    // 0x1afcbc: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1AFCB8u, 0x1AFCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFCC0u;
label_1afcc0:
    // 0x1afcc0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1afcc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1afcc4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1afcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afcc8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1afcc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1afccc: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1AFCCCu;
    SET_GPR_U32(ctx, 31, 0x1AFCD4u);
    ctx->pc = 0x1AFCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFCCCu;
    // 0x1afcd0: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1AFCCCu, 0x1AFCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFCD4u;
label_1afcd4:
    // 0x1afcd4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1afcd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1afcd8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1afcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afcdc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1afcdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1afce0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1AFCE0u;
    SET_GPR_U32(ctx, 31, 0x1AFCE8u);
    ctx->pc = 0x1AFCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFCE0u;
    // 0x1afce4: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1AFCE0u, 0x1AFCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFCE8u;
label_1afce8:
    // 0x1afce8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1afce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1afcec: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1afcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afcf0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1afcf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1afcf4: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1AFCF4u;
    SET_GPR_U32(ctx, 31, 0x1AFCFCu);
    ctx->pc = 0x1AFCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFCF4u;
    // 0x1afcf8: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1AFCF4u, 0x1AFCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFCFCu;
label_1afcfc:
    // 0x1afcfc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1afcfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1afd00: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1afd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afd04: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1afd04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1afd08: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1AFD08u;
    SET_GPR_U32(ctx, 31, 0x1AFD10u);
    ctx->pc = 0x1AFD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD08u;
    // 0x1afd0c: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1AFD08u, 0x1AFD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD10u;
label_1afd10:
    // 0x1afd10: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1afd10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1afd14: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1afd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afd18: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1afd18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1afd1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1afd1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd20: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1afd20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1afd24: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1afd24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1afd28: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFD28u;
    {
        const bool branch_taken_0x1afd28 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1AFD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD28u;
        // 0x1afd2c: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afd28) {
            ctx->pc = 0x1AFD34u;
            goto label_1afd34;
        }
    }
    ctx->pc = 0x1AFD30u;
    // 0x1afd30: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1afd30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1afd34:
    // 0x1afd34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1afd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1afd38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFD38u;
    {
        const bool branch_taken_0x1afd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD38u;
        // 0x1afd3c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afd38) {
            ctx->pc = 0x1AFD50u;
            goto label_1afd50;
        }
    }
    ctx->pc = 0x1AFD40u;
    // 0x1afd40: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1afd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1afd44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1afd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1afd48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFD48u;
    {
        const bool branch_taken_0x1afd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD48u;
        // 0x1afd4c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afd48) {
            ctx->pc = 0x1AFD54u;
            goto label_1afd54;
        }
    }
    ctx->pc = 0x1AFD50u;
label_1afd50:
    // 0x1afd50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1afd50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afd54:
    // 0x1afd54: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1afd54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1afd58: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x1afd58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1afd5c: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x1afd5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1afd60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1afd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afd64: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1afd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1afd68: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1afd68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1afd6c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1afd6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1afd70: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x1afd70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1afd74: 0x26100620  addiu       $s0, $s0, 0x620
    ctx->pc = 0x1afd74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x1afd78: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1AFD78u;
    SET_GPR_U32(ctx, 31, 0x1AFD80u);
    ctx->pc = 0x1AFD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD78u;
    // 0x1afd7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1AFD78u, 0x1AFD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD80u;
label_1afd80:
    // 0x1afd80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd84: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1AFD84u;
    SET_GPR_U32(ctx, 31, 0x1AFD8Cu);
    ctx->pc = 0x1AFD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD84u;
    // 0x1afd88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1AFD84u, 0x1AFD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD8Cu;
label_1afd8c:
    // 0x1afd8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd90: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1AFD90u;
    SET_GPR_U32(ctx, 31, 0x1AFD98u);
    ctx->pc = 0x1AFD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD90u;
    // 0x1afd94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1AFD90u, 0x1AFD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD98u;
label_1afd98:
    // 0x1afd98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1afd98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1afd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afda0: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1AFDA0u;
    SET_GPR_U32(ctx, 31, 0x1AFDA8u);
    ctx->pc = 0x1AFDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFDA0u;
    // 0x1afda4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1AFDA0u, 0x1AFDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFDA8u;
label_1afda8:
    // 0x1afda8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1afda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1afdac: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1AFDACu;
    SET_GPR_U32(ctx, 31, 0x1AFDB4u);
    ctx->pc = 0x1AFDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFDACu;
    // 0x1afdb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1AFDACu, 0x1AFDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFDB4u;
label_1afdb4:
    // 0x1afdb4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1afdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1afdb8: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x1AFDB8u;
    SET_GPR_U32(ctx, 31, 0x1AFDC0u);
    ctx->pc = 0x1AFDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFDB8u;
    // 0x1afdbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1AFDB8u, 0x1AFDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFDC0u;
label_1afdc0:
    // 0x1afdc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1afdc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1afdc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1afdc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1afdc8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1afdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1afdcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afdd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1afdd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afdd4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1afdd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1afdd8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1afdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1afddc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1afddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1afde0: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x1AFDE0u;
    SET_GPR_U32(ctx, 31, 0x1AFDE8u);
    ctx->pc = 0x1AFDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFDE0u;
    // 0x1afde4: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x1AFDE0u, 0x1AFDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFDE8u;
label_1afde8:
    // 0x1afde8: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x1afde8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1afdec: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1afdecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1afdf0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1afdf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1afdf4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1afdf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1afdf8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1afdf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1afdfc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1afdfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1afe00: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1afe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1afe04: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1afe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1afe08: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFE08u;
        // 0x1afe0c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFE10u;
}
