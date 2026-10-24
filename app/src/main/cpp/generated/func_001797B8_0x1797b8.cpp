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

// Function: func_001797B8
// Address: 0x1797b8 - 0x1799f8
void func_001797B8_0x1797b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001797B8_0x1797b8");
#endif

    switch (ctx->pc) {
        case 0x179888u: goto label_179888;
        case 0x1798a8u: goto label_1798a8;
        case 0x1798bcu: goto label_1798bc;
        case 0x1798d0u: goto label_1798d0;
        case 0x1798e4u: goto label_1798e4;
        case 0x1798f8u: goto label_1798f8;
        case 0x179968u: goto label_179968;
        case 0x179974u: goto label_179974;
        case 0x179980u: goto label_179980;
        case 0x179990u: goto label_179990;
        case 0x17999cu: goto label_17999c;
        case 0x1799a8u: goto label_1799a8;
        case 0x1799d0u: goto label_1799d0;
        default: break;
    }

    ctx->pc = 0x1797b8u;

    // 0x1797b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1797b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1797bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1797bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797c0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1797c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1797c4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1797c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1797c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1797c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797cc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1797ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1797d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1797d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797d4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1797d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1797d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1797d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1797dc: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1797dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1797e0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1797e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1797e4: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1797e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1797e8: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1797E8u;
    {
        const bool branch_taken_0x1797e8 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1797ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1797E8u;
        // 0x1797ec: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1797e8) {
            ctx->pc = 0x1797F4u;
            goto label_1797f4;
        }
    }
    ctx->pc = 0x1797F0u;
    // 0x1797f0: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1797f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1797f4:
    // 0x1797f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1797f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1797f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1797F8u;
    {
        const bool branch_taken_0x1797f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1797FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1797F8u;
        // 0x1797fc: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1797f8) {
            ctx->pc = 0x179810u;
            goto label_179810;
        }
    }
    ctx->pc = 0x179800u;
    // 0x179800: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x179800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x179804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x179804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179808: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x179808u;
    {
        const bool branch_taken_0x179808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179808u;
        // 0x17980c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179808) {
            ctx->pc = 0x179814u;
            goto label_179814;
        }
    }
    ctx->pc = 0x179810u;
label_179810:
    // 0x179810: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x179810u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179814:
    // 0x179814: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x179814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x179818: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17981c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x17981cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x179820: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x179820u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x179824: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x179824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x179828: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x179828u;
    {
        const bool branch_taken_0x179828 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x17982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179828u;
        // 0x17982c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179828) {
            ctx->pc = 0x179838u;
            goto label_179838;
        }
    }
    ctx->pc = 0x179830u;
    // 0x179830: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x179830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x179834: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x179834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179838:
    // 0x179838: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x179838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x17983c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17983Cu;
    {
        const bool branch_taken_0x17983c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17983Cu;
        // 0x179840: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17983c) {
            ctx->pc = 0x179854u;
            goto label_179854;
        }
    }
    ctx->pc = 0x179844u;
    // 0x179844: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x179844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x179848: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x179848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17984c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17984Cu;
    {
        const bool branch_taken_0x17984c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17984Cu;
        // 0x179850: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17984c) {
            ctx->pc = 0x179858u;
            goto label_179858;
        }
    }
    ctx->pc = 0x179854u;
label_179854:
    // 0x179854: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x179854u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179858:
    // 0x179858: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x179858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x17985c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x17985cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x179860: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x179860u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x179864: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x179864u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x179868: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x179868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17986c: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x17986cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x179870: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x179870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x179874: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x179874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x179878: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x179878u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17987c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17987cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x179880: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x179880u;
    SET_GPR_U32(ctx, 31, 0x179888u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x179880u, 0x179888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179888u;
label_179888:
    // 0x179888: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x179888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17988c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x17988cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x179890: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x179890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x179894: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x179894u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x179898: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x179898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x17989c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17989cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1798a0: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x1798A0u;
    SET_GPR_U32(ctx, 31, 0x1798A8u);
    ctx->pc = 0x1798A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1798A0u;
    // 0x1798a4: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1798A0u, 0x1798A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1798A8u;
label_1798a8:
    // 0x1798a8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1798a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1798ac: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1798acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1798b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1798b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1798b4: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1798B4u;
    SET_GPR_U32(ctx, 31, 0x1798BCu);
    ctx->pc = 0x1798B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1798B4u;
    // 0x1798b8: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1798B4u, 0x1798BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1798BCu;
label_1798bc:
    // 0x1798bc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1798bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1798c0: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1798c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1798c4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1798c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1798c8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1798C8u;
    SET_GPR_U32(ctx, 31, 0x1798D0u);
    ctx->pc = 0x1798CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1798C8u;
    // 0x1798cc: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1798C8u, 0x1798D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1798D0u;
label_1798d0:
    // 0x1798d0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1798d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1798d4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1798d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1798d8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1798d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1798dc: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1798DCu;
    SET_GPR_U32(ctx, 31, 0x1798E4u);
    ctx->pc = 0x1798E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1798DCu;
    // 0x1798e0: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1798DCu, 0x1798E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1798E4u;
label_1798e4:
    // 0x1798e4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1798e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1798e8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1798e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1798ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1798ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1798f0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1798F0u;
    SET_GPR_U32(ctx, 31, 0x1798F8u);
    ctx->pc = 0x1798F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1798F0u;
    // 0x1798f4: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1798F0u, 0x1798F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1798F8u;
label_1798f8:
    // 0x1798f8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1798f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1798fc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1798fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179900: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x179900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x179904: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x179904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179908: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x179908u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17990c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x17990cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x179910: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x179910u;
    {
        const bool branch_taken_0x179910 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x179914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179910u;
        // 0x179914: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179910) {
            ctx->pc = 0x17991Cu;
            goto label_17991c;
        }
    }
    ctx->pc = 0x179918u;
    // 0x179918: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x179918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17991c:
    // 0x17991c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17991cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x179920: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179920u;
    {
        const bool branch_taken_0x179920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179920u;
        // 0x179924: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179920) {
            ctx->pc = 0x179938u;
            goto label_179938;
        }
    }
    ctx->pc = 0x179928u;
    // 0x179928: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x179928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x17992c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17992cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179930: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x179930u;
    {
        const bool branch_taken_0x179930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179930u;
        // 0x179934: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179930) {
            ctx->pc = 0x17993Cu;
            goto label_17993c;
        }
    }
    ctx->pc = 0x179938u;
label_179938:
    // 0x179938: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x179938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17993c:
    // 0x17993c: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x17993cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x179940: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x179940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x179944: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x179944u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x179948: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x179948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17994c: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x17994cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x179950: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x179950u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x179954: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x179954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x179958: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x179958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x17995c: 0x26100660  addiu       $s0, $s0, 0x660
    ctx->pc = 0x17995cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    // 0x179960: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x179960u;
    SET_GPR_U32(ctx, 31, 0x179968u);
    ctx->pc = 0x179964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179960u;
    // 0x179964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x179960u, 0x179968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179968u;
label_179968:
    // 0x179968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17996c: 0xc05ce66  jal         func_173998
    ctx->pc = 0x17996Cu;
    SET_GPR_U32(ctx, 31, 0x179974u);
    ctx->pc = 0x179970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17996Cu;
    // 0x179970: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x17996Cu, 0x179974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179974u;
label_179974:
    // 0x179974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179978: 0xc051f18  jal         func_147C60
    ctx->pc = 0x179978u;
    SET_GPR_U32(ctx, 31, 0x179980u);
    ctx->pc = 0x17997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179978u;
    // 0x17997c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x179978u, 0x179980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179980u;
label_179980:
    // 0x179980: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179984: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x179984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179988: 0xc051f22  jal         func_147C88
    ctx->pc = 0x179988u;
    SET_GPR_U32(ctx, 31, 0x179990u);
    ctx->pc = 0x17998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179988u;
    // 0x17998c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x179988u, 0x179990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179990u;
label_179990:
    // 0x179990: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x179990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x179994: 0xc05ce42  jal         func_173908
    ctx->pc = 0x179994u;
    SET_GPR_U32(ctx, 31, 0x17999Cu);
    ctx->pc = 0x179998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179994u;
    // 0x179998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x179994u, 0x17999Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17999Cu;
label_17999c:
    // 0x17999c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17999cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1799a0: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x1799A0u;
    SET_GPR_U32(ctx, 31, 0x1799A8u);
    ctx->pc = 0x1799A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1799A0u;
    // 0x1799a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1799A0u, 0x1799A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1799A8u;
label_1799a8:
    // 0x1799a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1799a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1799ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1799acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1799b0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1799b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1799b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1799b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1799b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1799b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1799bc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1799bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1799c0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1799c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1799c4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1799c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1799c8: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x1799C8u;
    SET_GPR_U32(ctx, 31, 0x1799D0u);
    ctx->pc = 0x1799CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1799C8u;
    // 0x1799cc: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x1799C8u, 0x1799D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1799D0u;
label_1799d0:
    // 0x1799d0: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x1799d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1799d4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1799d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1799d8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1799d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1799dc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1799dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1799e0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1799e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1799e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1799e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1799e8: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1799e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1799ec: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1799ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1799f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1799F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1799F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1799F0u;
        // 0x1799f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1799F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1799F8u;
}
