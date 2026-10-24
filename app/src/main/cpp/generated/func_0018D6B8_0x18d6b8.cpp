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

// Function: func_0018D6B8
// Address: 0x18d6b8 - 0x18d8f8
void func_0018D6B8_0x18d6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018D6B8_0x18d6b8");
#endif

    switch (ctx->pc) {
        case 0x18d788u: goto label_18d788;
        case 0x18d7a8u: goto label_18d7a8;
        case 0x18d7bcu: goto label_18d7bc;
        case 0x18d7d0u: goto label_18d7d0;
        case 0x18d7e4u: goto label_18d7e4;
        case 0x18d7f8u: goto label_18d7f8;
        case 0x18d868u: goto label_18d868;
        case 0x18d874u: goto label_18d874;
        case 0x18d880u: goto label_18d880;
        case 0x18d890u: goto label_18d890;
        case 0x18d89cu: goto label_18d89c;
        case 0x18d8a8u: goto label_18d8a8;
        case 0x18d8d0u: goto label_18d8d0;
        default: break;
    }

    ctx->pc = 0x18d6b8u;

    // 0x18d6b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18d6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18d6bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18d6bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d6c0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x18d6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x18d6c4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x18d6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x18d6c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18d6c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d6cc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x18d6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x18d6d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18d6d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d6d4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x18d6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x18d6d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18d6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18d6dc: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x18d6dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x18d6e0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x18d6e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x18d6e4: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x18d6e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18d6e8: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x18D6E8u;
    {
        const bool branch_taken_0x18d6e8 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6E8u;
        // 0x18d6ec: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d6e8) {
            ctx->pc = 0x18D6F4u;
            goto label_18d6f4;
        }
    }
    ctx->pc = 0x18D6F0u;
    // 0x18d6f0: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x18d6f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18d6f4:
    // 0x18d6f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d6f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D6F8u;
    {
        const bool branch_taken_0x18d6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6F8u;
        // 0x18d6fc: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d6f8) {
            ctx->pc = 0x18D710u;
            goto label_18d710;
        }
    }
    ctx->pc = 0x18D700u;
    // 0x18d700: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18d700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18d704: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d708: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D708u;
    {
        const bool branch_taken_0x18d708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D708u;
        // 0x18d70c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d708) {
            ctx->pc = 0x18D714u;
            goto label_18d714;
        }
    }
    ctx->pc = 0x18D710u;
label_18d710:
    // 0x18d710: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18d710u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d714:
    // 0x18d714: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x18d714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x18d718: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18d718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d71c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18d71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x18d720: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x18d720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x18d724: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x18d724u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18d728: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D728u;
    {
        const bool branch_taken_0x18d728 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D728u;
        // 0x18d72c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d728) {
            ctx->pc = 0x18D738u;
            goto label_18d738;
        }
    }
    ctx->pc = 0x18D730u;
    // 0x18d730: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x18d730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18d734: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d738:
    // 0x18d738: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18d738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18d73c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D73Cu;
    {
        const bool branch_taken_0x18d73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D73Cu;
        // 0x18d740: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d73c) {
            ctx->pc = 0x18D754u;
            goto label_18d754;
        }
    }
    ctx->pc = 0x18D744u;
    // 0x18d744: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18d744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18d748: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d74c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D74Cu;
    {
        const bool branch_taken_0x18d74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D74Cu;
        // 0x18d750: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d74c) {
            ctx->pc = 0x18D758u;
            goto label_18d758;
        }
    }
    ctx->pc = 0x18D754u;
label_18d754:
    // 0x18d754: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18d754u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d758:
    // 0x18d758: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x18d758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x18d75c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x18d75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x18d760: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x18d760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x18d764: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x18d764u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18d768: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18d768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18d76c: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x18d76cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18d770: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18d770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18d774: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x18d774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x18d778: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18d778u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18d77c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18d77cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18d780: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18D780u;
    SET_GPR_U32(ctx, 31, 0x18D788u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18D780u, 0x18D788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D788u;
label_18d788:
    // 0x18d788: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x18d788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d78c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18d78cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18d790: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x18d790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x18d794: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18d794u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18d798: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x18d798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x18d79c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18d79cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18d7a0: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x18D7A0u;
    SET_GPR_U32(ctx, 31, 0x18D7A8u);
    ctx->pc = 0x18D7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D7A0u;
    // 0x18d7a4: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x18D7A0u, 0x18D7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D7A8u;
label_18d7a8:
    // 0x18d7a8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18d7a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18d7ac: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x18d7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d7b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18d7b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18d7b4: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18D7B4u;
    SET_GPR_U32(ctx, 31, 0x18D7BCu);
    ctx->pc = 0x18D7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D7B4u;
    // 0x18d7b8: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18D7B4u, 0x18D7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D7BCu;
label_18d7bc:
    // 0x18d7bc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18d7bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18d7c0: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x18d7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d7c4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18d7c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18d7c8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18D7C8u;
    SET_GPR_U32(ctx, 31, 0x18D7D0u);
    ctx->pc = 0x18D7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D7C8u;
    // 0x18d7cc: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18D7C8u, 0x18D7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D7D0u;
label_18d7d0:
    // 0x18d7d0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x18d7d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18d7d4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x18d7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d7d8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18d7d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18d7dc: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18D7DCu;
    SET_GPR_U32(ctx, 31, 0x18D7E4u);
    ctx->pc = 0x18D7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D7DCu;
    // 0x18d7e0: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18D7DCu, 0x18D7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D7E4u;
label_18d7e4:
    // 0x18d7e4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x18d7e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18d7e8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x18d7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d7ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18d7ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18d7f0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18D7F0u;
    SET_GPR_U32(ctx, 31, 0x18D7F8u);
    ctx->pc = 0x18D7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D7F0u;
    // 0x18d7f4: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18D7F0u, 0x18D7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D7F8u;
label_18d7f8:
    // 0x18d7f8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x18d7f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18d7fc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x18d7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d800: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x18d800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18d804: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18d804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d808: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18d808u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18d80c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x18d80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x18d810: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x18D810u;
    {
        const bool branch_taken_0x18d810 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D810u;
        // 0x18d814: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d810) {
            ctx->pc = 0x18D81Cu;
            goto label_18d81c;
        }
    }
    ctx->pc = 0x18D818u;
    // 0x18d818: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x18d818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18d81c:
    // 0x18d81c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d820: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D820u;
    {
        const bool branch_taken_0x18d820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D820u;
        // 0x18d824: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d820) {
            ctx->pc = 0x18D838u;
            goto label_18d838;
        }
    }
    ctx->pc = 0x18D828u;
    // 0x18d828: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18d828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18d82c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d830: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D830u;
    {
        const bool branch_taken_0x18d830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D830u;
        // 0x18d834: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d830) {
            ctx->pc = 0x18D83Cu;
            goto label_18d83c;
        }
    }
    ctx->pc = 0x18D838u;
label_18d838:
    // 0x18d838: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18d838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d83c:
    // 0x18d83c: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x18d83cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x18d840: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x18d840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x18d844: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x18d844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18d848: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18d848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d84c: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x18d84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x18d850: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18d850u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18d854: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18d854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18d858: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x18d858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18d85c: 0x26100660  addiu       $s0, $s0, 0x660
    ctx->pc = 0x18d85cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    // 0x18d860: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x18D860u;
    SET_GPR_U32(ctx, 31, 0x18D868u);
    ctx->pc = 0x18D864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D860u;
    // 0x18d864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x18D860u, 0x18D868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D868u;
label_18d868:
    // 0x18d868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d86c: 0xc05ce66  jal         func_173998
    ctx->pc = 0x18D86Cu;
    SET_GPR_U32(ctx, 31, 0x18D874u);
    ctx->pc = 0x18D870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D86Cu;
    // 0x18d870: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x18D86Cu, 0x18D874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D874u;
label_18d874:
    // 0x18d874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d878: 0xc051f18  jal         func_147C60
    ctx->pc = 0x18D878u;
    SET_GPR_U32(ctx, 31, 0x18D880u);
    ctx->pc = 0x18D87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D878u;
    // 0x18d87c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x18D878u, 0x18D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D880u;
label_18d880:
    // 0x18d880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18d880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d884: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18d884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d888: 0xc051f22  jal         func_147C88
    ctx->pc = 0x18D888u;
    SET_GPR_U32(ctx, 31, 0x18D890u);
    ctx->pc = 0x18D88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D888u;
    // 0x18d88c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x18D888u, 0x18D890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D890u;
label_18d890:
    // 0x18d890: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x18d890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18d894: 0xc05ce42  jal         func_173908
    ctx->pc = 0x18D894u;
    SET_GPR_U32(ctx, 31, 0x18D89Cu);
    ctx->pc = 0x18D898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D894u;
    // 0x18d898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x18D894u, 0x18D89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D89Cu;
label_18d89c:
    // 0x18d89c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x18d89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18d8a0: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x18D8A0u;
    SET_GPR_U32(ctx, 31, 0x18D8A8u);
    ctx->pc = 0x18D8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D8A0u;
    // 0x18d8a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x18D8A0u, 0x18D8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D8A8u;
label_18d8a8:
    // 0x18d8a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18d8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18d8ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d8acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d8b0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x18d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18d8b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d8b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18d8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d8bc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x18d8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x18d8c0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x18d8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x18d8c4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x18d8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18d8c8: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x18D8C8u;
    SET_GPR_U32(ctx, 31, 0x18D8D0u);
    ctx->pc = 0x18D8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D8C8u;
    // 0x18d8cc: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x18D8C8u, 0x18D8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D8D0u;
label_18d8d0:
    // 0x18d8d0: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x18d8d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x18d8d4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x18d8d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18d8d8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x18d8d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18d8dc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x18d8dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18d8e0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x18d8e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18d8e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18d8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d8e8: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x18d8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18d8ec: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x18d8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18d8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x18D8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D8F0u;
        // 0x18d8f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D8F8u;
}
