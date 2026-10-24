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

// Function: func_001BCB38
// Address: 0x1bcb38 - 0x1bcd70
void func_001BCB38_0x1bcb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BCB38_0x1bcb38");
#endif

    switch (ctx->pc) {
        case 0x1bcc04u: goto label_1bcc04;
        case 0x1bcc18u: goto label_1bcc18;
        case 0x1bcc38u: goto label_1bcc38;
        case 0x1bcc4cu: goto label_1bcc4c;
        case 0x1bcc60u: goto label_1bcc60;
        case 0x1bcc74u: goto label_1bcc74;
        case 0x1bcce4u: goto label_1bcce4;
        case 0x1bccf0u: goto label_1bccf0;
        case 0x1bccfcu: goto label_1bccfc;
        case 0x1bcd0cu: goto label_1bcd0c;
        case 0x1bcd18u: goto label_1bcd18;
        case 0x1bcd24u: goto label_1bcd24;
        case 0x1bcd4cu: goto label_1bcd4c;
        default: break;
    }

    ctx->pc = 0x1bcb38u;

    // 0x1bcb38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1bcb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1bcb3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bcb3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcb40: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1bcb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1bcb44: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1bcb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1bcb48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1bcb48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcb4c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1bcb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1bcb50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1bcb50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcb54: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1bcb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1bcb58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bcb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1bcb5c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1bcb5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1bcb60: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1bcb60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1bcb64: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCB64u;
    {
        const bool branch_taken_0x1bcb64 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1BCB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB64u;
        // 0x1bcb68: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb64) {
            ctx->pc = 0x1BCB70u;
            goto label_1bcb70;
        }
    }
    ctx->pc = 0x1BCB6Cu;
    // 0x1bcb6c: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1bcb6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1bcb70:
    // 0x1bcb70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1bcb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bcb74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCB74u;
    {
        const bool branch_taken_0x1bcb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB74u;
        // 0x1bcb78: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb74) {
            ctx->pc = 0x1BCB8Cu;
            goto label_1bcb8c;
        }
    }
    ctx->pc = 0x1BCB7Cu;
    // 0x1bcb7c: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1bcb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1bcb80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bcb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bcb84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCB84u;
    {
        const bool branch_taken_0x1bcb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB84u;
        // 0x1bcb88: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb84) {
            ctx->pc = 0x1BCB90u;
            goto label_1bcb90;
        }
    }
    ctx->pc = 0x1BCB8Cu;
label_1bcb8c:
    // 0x1bcb8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bcb8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bcb90:
    // 0x1bcb90: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1bcb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1bcb94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bcb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcb98: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1bcb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1bcb9c: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1bcb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1bcba0: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x1bcba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1bcba4: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCBA4u;
    {
        const bool branch_taken_0x1bcba4 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1BCBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBA4u;
        // 0x1bcba8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcba4) {
            ctx->pc = 0x1BCBB4u;
            goto label_1bcbb4;
        }
    }
    ctx->pc = 0x1BCBACu;
    // 0x1bcbac: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1bcbacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bcbb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bcbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bcbb4:
    // 0x1bcbb4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1bcbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1bcbb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCBB8u;
    {
        const bool branch_taken_0x1bcbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBB8u;
        // 0x1bcbbc: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcbb8) {
            ctx->pc = 0x1BCBD0u;
            goto label_1bcbd0;
        }
    }
    ctx->pc = 0x1BCBC0u;
    // 0x1bcbc0: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1bcbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1bcbc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bcbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bcbc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCBC8u;
    {
        const bool branch_taken_0x1bcbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBC8u;
        // 0x1bcbcc: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcbc8) {
            ctx->pc = 0x1BCBD4u;
            goto label_1bcbd4;
        }
    }
    ctx->pc = 0x1BCBD0u;
label_1bcbd0:
    // 0x1bcbd0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bcbd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bcbd4:
    // 0x1bcbd4: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1bcbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1bcbd8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1bcbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1bcbdc: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1bcbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1bcbe0: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1bcbe0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bcbe4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1bcbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1bcbe8: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1bcbe8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1bcbec: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1bcbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1bcbf0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1bcbf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1bcbf4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bcbf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bcbf8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1bcbf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1bcbfc: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1BCBFCu;
    SET_GPR_U32(ctx, 31, 0x1BCC04u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1BCBFCu, 0x1BCC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC04u;
label_1bcc04:
    // 0x1bcc04: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1bcc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcc08: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1bcc08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1bcc0c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1bcc0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bcc10: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x1BCC10u;
    SET_GPR_U32(ctx, 31, 0x1BCC18u);
    ctx->pc = 0x1BCC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC10u;
    // 0x1bcc14: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1BCC10u, 0x1BCC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC18u;
label_1bcc18:
    // 0x1bcc18: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1bcc18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1bcc1c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bcc1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bcc20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bcc20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bcc24: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1bcc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcc28: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1bcc28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1bcc2c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1bcc2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bcc30: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1BCC30u;
    SET_GPR_U32(ctx, 31, 0x1BCC38u);
    ctx->pc = 0x1BCC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC30u;
    // 0x1bcc34: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1BCC30u, 0x1BCC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC38u;
label_1bcc38:
    // 0x1bcc38: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1bcc38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1bcc3c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1bcc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcc40: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1bcc40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bcc44: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1BCC44u;
    SET_GPR_U32(ctx, 31, 0x1BCC4Cu);
    ctx->pc = 0x1BCC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC44u;
    // 0x1bcc48: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1BCC44u, 0x1BCC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC4Cu;
label_1bcc4c:
    // 0x1bcc4c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1bcc4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1bcc50: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1bcc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcc54: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1bcc54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bcc58: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1BCC58u;
    SET_GPR_U32(ctx, 31, 0x1BCC60u);
    ctx->pc = 0x1BCC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC58u;
    // 0x1bcc5c: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1BCC58u, 0x1BCC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC60u;
label_1bcc60:
    // 0x1bcc60: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1bcc60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1bcc64: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1bcc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcc68: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1bcc68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bcc6c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1BCC6Cu;
    SET_GPR_U32(ctx, 31, 0x1BCC74u);
    ctx->pc = 0x1BCC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC6Cu;
    // 0x1bcc70: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1BCC6Cu, 0x1BCC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC74u;
label_1bcc74:
    // 0x1bcc74: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1bcc74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1bcc78: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1bcc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcc7c: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1bcc7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1bcc80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bcc80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcc84: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1bcc84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bcc88: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bcc88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bcc8c: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCC8Cu;
    {
        const bool branch_taken_0x1bcc8c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1BCC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC8Cu;
        // 0x1bcc90: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc8c) {
            ctx->pc = 0x1BCC98u;
            goto label_1bcc98;
        }
    }
    ctx->pc = 0x1BCC94u;
    // 0x1bcc94: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1bcc94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1bcc98:
    // 0x1bcc98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1bcc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bcc9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCC9Cu;
    {
        const bool branch_taken_0x1bcc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC9Cu;
        // 0x1bcca0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc9c) {
            ctx->pc = 0x1BCCB4u;
            goto label_1bccb4;
        }
    }
    ctx->pc = 0x1BCCA4u;
    // 0x1bcca4: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1bcca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1bcca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bcca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bccac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCCACu;
    {
        const bool branch_taken_0x1bccac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCACu;
        // 0x1bccb0: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bccac) {
            ctx->pc = 0x1BCCB8u;
            goto label_1bccb8;
        }
    }
    ctx->pc = 0x1BCCB4u;
label_1bccb4:
    // 0x1bccb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bccb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bccb8:
    // 0x1bccb8: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x1bccb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1bccbc: 0x8e620628  lw          $v0, 0x628($s3)
    ctx->pc = 0x1bccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1576)));
    // 0x1bccc0: 0x2508018  mult        $s0, $s2, $s0
    ctx->pc = 0x1bccc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1bccc4: 0x26310080  addiu       $s1, $s1, 0x80
    ctx->pc = 0x1bccc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1bccc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bccc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcccc: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1bccccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1bccd0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bccd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1bccd4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1bccd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1bccd8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1bccd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bccdc: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1BCCDCu;
    SET_GPR_U32(ctx, 31, 0x1BCCE4u);
    ctx->pc = 0x1BCCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCCDCu;
    // 0x1bcce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1BCCDCu, 0x1BCCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCCE4u;
label_1bcce4:
    // 0x1bcce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bcce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcce8: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1BCCE8u;
    SET_GPR_U32(ctx, 31, 0x1BCCF0u);
    ctx->pc = 0x1BCCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCCE8u;
    // 0x1bccec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1BCCE8u, 0x1BCCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCCF0u;
label_1bccf0:
    // 0x1bccf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bccf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bccf4: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1BCCF4u;
    SET_GPR_U32(ctx, 31, 0x1BCCFCu);
    ctx->pc = 0x1BCCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCCF4u;
    // 0x1bccf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1BCCF4u, 0x1BCCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCCFCu;
label_1bccfc:
    // 0x1bccfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bccfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bcd00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd04: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1BCD04u;
    SET_GPR_U32(ctx, 31, 0x1BCD0Cu);
    ctx->pc = 0x1BCD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD04u;
    // 0x1bcd08: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1BCD04u, 0x1BCD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD0Cu;
label_1bcd0c:
    // 0x1bcd0c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1bcd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bcd10: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1BCD10u;
    SET_GPR_U32(ctx, 31, 0x1BCD18u);
    ctx->pc = 0x1BCD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD10u;
    // 0x1bcd14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1BCD10u, 0x1BCD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD18u;
label_1bcd18:
    // 0x1bcd18: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1bcd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bcd1c: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x1BCD1Cu;
    SET_GPR_U32(ctx, 31, 0x1BCD24u);
    ctx->pc = 0x1BCD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD1Cu;
    // 0x1bcd20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1BCD1Cu, 0x1BCD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD24u;
label_1bcd24:
    // 0x1bcd24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bcd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bcd28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bcd28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcd2c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1bcd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bcd30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bcd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bcd34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd38: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1bcd38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1bcd3c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1bcd3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1bcd40: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1bcd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1bcd44: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x1BCD44u;
    SET_GPR_U32(ctx, 31, 0x1BCD4Cu);
    ctx->pc = 0x1BCD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD44u;
    // 0x1bcd48: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x1BCD44u, 0x1BCD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD4Cu;
label_1bcd4c:
    // 0x1bcd4c: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x1bcd4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1bcd50: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1bcd50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bcd54: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1bcd54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bcd58: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1bcd58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bcd5c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1bcd5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bcd60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bcd60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bcd64: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1bcd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bcd68: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD68u;
        // 0x1bcd6c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCD70u;
}
