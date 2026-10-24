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

// Function: func_0018FC10
// Address: 0x18fc10 - 0x18fe60
void func_0018FC10_0x18fc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018FC10_0x18fc10");
#endif

    switch (ctx->pc) {
        case 0x18fce0u: goto label_18fce0;
        case 0x18fd00u: goto label_18fd00;
        case 0x18fd20u: goto label_18fd20;
        case 0x18fd34u: goto label_18fd34;
        case 0x18fd48u: goto label_18fd48;
        case 0x18fd5cu: goto label_18fd5c;
        case 0x18fdccu: goto label_18fdcc;
        case 0x18fdd8u: goto label_18fdd8;
        case 0x18fde4u: goto label_18fde4;
        case 0x18fdf4u: goto label_18fdf4;
        case 0x18fe00u: goto label_18fe00;
        case 0x18fe0cu: goto label_18fe0c;
        case 0x18fe34u: goto label_18fe34;
        default: break;
    }

    ctx->pc = 0x18fc10u;

    // 0x18fc10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18fc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18fc14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18fc14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc18: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x18fc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x18fc1c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x18fc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x18fc20: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18fc20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc24: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x18fc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x18fc28: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18fc28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc2c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x18fc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x18fc30: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18fc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18fc34: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x18fc34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x18fc38: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x18fc38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x18fc3c: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x18fc3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18fc40: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x18FC40u;
    {
        const bool branch_taken_0x18fc40 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC40u;
        // 0x18fc44: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc40) {
            ctx->pc = 0x18FC4Cu;
            goto label_18fc4c;
        }
    }
    ctx->pc = 0x18FC48u;
    // 0x18fc48: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x18fc48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18fc4c:
    // 0x18fc4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18fc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18fc50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18FC50u;
    {
        const bool branch_taken_0x18fc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC50u;
        // 0x18fc54: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc50) {
            ctx->pc = 0x18FC68u;
            goto label_18fc68;
        }
    }
    ctx->pc = 0x18FC58u;
    // 0x18fc58: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18fc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18fc5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18fc60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18FC60u;
    {
        const bool branch_taken_0x18fc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC60u;
        // 0x18fc64: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc60) {
            ctx->pc = 0x18FC6Cu;
            goto label_18fc6c;
        }
    }
    ctx->pc = 0x18FC68u;
label_18fc68:
    // 0x18fc68: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18fc68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fc6c:
    // 0x18fc6c: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x18fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x18fc70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18fc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc74: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18fc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x18fc78: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x18fc78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x18fc7c: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x18fc7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18fc80: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FC80u;
    {
        const bool branch_taken_0x18fc80 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18FC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC80u;
        // 0x18fc84: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc80) {
            ctx->pc = 0x18FC90u;
            goto label_18fc90;
        }
    }
    ctx->pc = 0x18FC88u;
    // 0x18fc88: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x18fc88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18fc8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18fc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18fc90:
    // 0x18fc90: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18fc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18fc94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18FC94u;
    {
        const bool branch_taken_0x18fc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC94u;
        // 0x18fc98: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc94) {
            ctx->pc = 0x18FCACu;
            goto label_18fcac;
        }
    }
    ctx->pc = 0x18FC9Cu;
    // 0x18fc9c: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18fc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18fca0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18fca4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18FCA4u;
    {
        const bool branch_taken_0x18fca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCA4u;
        // 0x18fca8: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fca4) {
            ctx->pc = 0x18FCB0u;
            goto label_18fcb0;
        }
    }
    ctx->pc = 0x18FCACu;
label_18fcac:
    // 0x18fcac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18fcacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fcb0:
    // 0x18fcb0: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x18fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x18fcb4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x18fcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x18fcb8: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x18fcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x18fcbc: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x18fcbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18fcc0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18fcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18fcc4: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x18fcc4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18fcc8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18fcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18fccc: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x18fcccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x18fcd0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x18fcd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x18fcd4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x18fcd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x18fcd8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18FCD8u;
    SET_GPR_U32(ctx, 31, 0x18FCE0u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18FCD8u, 0x18FCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FCE0u;
label_18fce0:
    // 0x18fce0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x18fce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fce4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x18fce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18fce8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x18fce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x18fcec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18fcecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18fcf0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18fcf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18fcf4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18fcf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18fcf8: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x18FCF8u;
    SET_GPR_U32(ctx, 31, 0x18FD00u);
    ctx->pc = 0x18FCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FCF8u;
    // 0x18fcfc: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x18FCF8u, 0x18FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FD00u;
label_18fd00:
    // 0x18fd00: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x18fd00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x18fd04: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x18fd04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x18fd08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18fd08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18fd0c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x18fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fd10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18fd10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x18fd14: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18fd14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18fd18: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18FD18u;
    SET_GPR_U32(ctx, 31, 0x18FD20u);
    ctx->pc = 0x18FD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FD18u;
    // 0x18fd1c: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18FD18u, 0x18FD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FD20u;
label_18fd20:
    // 0x18fd20: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x18fd20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18fd24: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x18fd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fd28: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18fd28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18fd2c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18FD2Cu;
    SET_GPR_U32(ctx, 31, 0x18FD34u);
    ctx->pc = 0x18FD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FD2Cu;
    // 0x18fd30: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18FD2Cu, 0x18FD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FD34u;
label_18fd34:
    // 0x18fd34: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18fd34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18fd38: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x18fd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fd3c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18fd3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18fd40: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18FD40u;
    SET_GPR_U32(ctx, 31, 0x18FD48u);
    ctx->pc = 0x18FD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FD40u;
    // 0x18fd44: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18FD40u, 0x18FD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FD48u;
label_18fd48:
    // 0x18fd48: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18fd48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18fd4c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x18fd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fd50: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18fd50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18fd54: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18FD54u;
    SET_GPR_U32(ctx, 31, 0x18FD5Cu);
    ctx->pc = 0x18FD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FD54u;
    // 0x18fd58: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18FD54u, 0x18FD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FD5Cu;
label_18fd5c:
    // 0x18fd5c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18fd5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18fd60: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x18fd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fd64: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x18fd64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18fd68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18fd68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fd6c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18fd6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18fd70: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x18fd70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x18fd74: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x18FD74u;
    {
        const bool branch_taken_0x18fd74 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18FD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD74u;
        // 0x18fd78: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd74) {
            ctx->pc = 0x18FD80u;
            goto label_18fd80;
        }
    }
    ctx->pc = 0x18FD7Cu;
    // 0x18fd7c: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x18fd7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18fd80:
    // 0x18fd80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18fd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18fd84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18FD84u;
    {
        const bool branch_taken_0x18fd84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD84u;
        // 0x18fd88: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd84) {
            ctx->pc = 0x18FD9Cu;
            goto label_18fd9c;
        }
    }
    ctx->pc = 0x18FD8Cu;
    // 0x18fd8c: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18fd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18fd90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18fd94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18FD94u;
    {
        const bool branch_taken_0x18fd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD94u;
        // 0x18fd98: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd94) {
            ctx->pc = 0x18FDA0u;
            goto label_18fda0;
        }
    }
    ctx->pc = 0x18FD9Cu;
label_18fd9c:
    // 0x18fd9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18fd9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fda0:
    // 0x18fda0: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x18fda0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x18fda4: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x18fda4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x18fda8: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x18fda8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18fdac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18fdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fdb0: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x18fdb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x18fdb4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18fdb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18fdb8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18fdb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18fdbc: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x18fdbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18fdc0: 0x26100680  addiu       $s0, $s0, 0x680
    ctx->pc = 0x18fdc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1664));
    // 0x18fdc4: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x18FDC4u;
    SET_GPR_U32(ctx, 31, 0x18FDCCu);
    ctx->pc = 0x18FDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FDC4u;
    // 0x18fdc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x18FDC4u, 0x18FDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FDCCu;
label_18fdcc:
    // 0x18fdcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18fdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fdd0: 0xc05ce66  jal         func_173998
    ctx->pc = 0x18FDD0u;
    SET_GPR_U32(ctx, 31, 0x18FDD8u);
    ctx->pc = 0x18FDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FDD0u;
    // 0x18fdd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x18FDD0u, 0x18FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FDD8u;
label_18fdd8:
    // 0x18fdd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18fdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fddc: 0xc051f18  jal         func_147C60
    ctx->pc = 0x18FDDCu;
    SET_GPR_U32(ctx, 31, 0x18FDE4u);
    ctx->pc = 0x18FDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FDDCu;
    // 0x18fde0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x18FDDCu, 0x18FDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FDE4u;
label_18fde4:
    // 0x18fde4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18fde4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fde8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18fde8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fdec: 0xc051f22  jal         func_147C88
    ctx->pc = 0x18FDECu;
    SET_GPR_U32(ctx, 31, 0x18FDF4u);
    ctx->pc = 0x18FDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FDECu;
    // 0x18fdf0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x18FDECu, 0x18FDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FDF4u;
label_18fdf4:
    // 0x18fdf4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x18fdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18fdf8: 0xc05ce42  jal         func_173908
    ctx->pc = 0x18FDF8u;
    SET_GPR_U32(ctx, 31, 0x18FE00u);
    ctx->pc = 0x18FDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FDF8u;
    // 0x18fdfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x18FDF8u, 0x18FE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FE00u;
label_18fe00:
    // 0x18fe00: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x18fe00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18fe04: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x18FE04u;
    SET_GPR_U32(ctx, 31, 0x18FE0Cu);
    ctx->pc = 0x18FE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FE04u;
    // 0x18fe08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x18FE04u, 0x18FE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FE0Cu;
label_18fe0c:
    // 0x18fe0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18fe0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18fe10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18fe10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18fe14: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x18fe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18fe18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18fe18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18fe1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe20: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x18fe20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x18fe24: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x18fe24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x18fe28: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x18fe28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18fe2c: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x18FE2Cu;
    SET_GPR_U32(ctx, 31, 0x18FE34u);
    ctx->pc = 0x18FE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FE2Cu;
    // 0x18fe30: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x18FE2Cu, 0x18FE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FE34u;
label_18fe34:
    // 0x18fe34: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x18fe34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x18fe38: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x18fe38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18fe3c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x18fe3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18fe40: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x18fe40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18fe44: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x18fe44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18fe48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18fe48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18fe4c: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x18fe4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18fe50: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x18fe50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18fe54: 0x3e00008  jr          $ra
    ctx->pc = 0x18FE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE54u;
        // 0x18fe58: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FE5Cu;
    // 0x18fe5c: 0x0  nop
    ctx->pc = 0x18fe5cu;
    // NOP
    ctx->pc = 0x18fe60u;
}
