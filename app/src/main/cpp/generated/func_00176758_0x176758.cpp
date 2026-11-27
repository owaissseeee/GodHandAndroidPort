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

// Function: func_00176758
// Address: 0x176758 - 0x1769e0
void func_00176758_0x176758(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00176758_0x176758");
#endif

    if (__builtin_expect(ctx->pc != 0x176758u, 0)) {
        switch (ctx->pc) {
            case 0x17684cu: goto label_17684c;
            case 0x176870u: goto label_176870;
            case 0x176890u: goto label_176890;
            case 0x1768a4u: goto label_1768a4;
            case 0x1768b8u: goto label_1768b8;
            case 0x1768ccu: goto label_1768cc;
            case 0x1768e0u: goto label_1768e0;
            case 0x176950u: goto label_176950;
            case 0x17695cu: goto label_17695c;
            case 0x176968u: goto label_176968;
            case 0x176978u: goto label_176978;
            case 0x176984u: goto label_176984;
            case 0x176990u: goto label_176990;
            case 0x1769b8u: goto label_1769b8;
            default: break;
        }
    }


    // 0x176758: 0x27bdff60  addiu       $sp, $sp, -0xA0
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x17675c: 0x102d  daddu       $v0, $zero, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176760: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x176760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x176764: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x176764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x176768: 0xc0802d  daddu       $s0, $a2, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17676c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x17676cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x176770: 0xe0882d  daddu       $s1, $a3, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176774: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x176774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x176778: 0xa0902d  daddu       $s2, $a1, $zero
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17677c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17677cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x176780: 0x80982d  daddu       $s3, $a0, $zero
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176784: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x176784u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x176788: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x176788u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x17678c: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x17678cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x176790: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x176790u;
    {
        const bool branch_taken_0x176790 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x176794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176790u;
        // 0x176794: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176790) {
            ctx->pc = 0x17679Cu;
            goto label_17679c;
        }
    }
    // 0x176798: 0x243102a  slt         $v0, $s2, $v1
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17679c:
    // 0x17679c: 0x304200ff  andi        $v0, $v0, 0xFF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1767a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1767A0u;
    {
        const bool branch_taken_0x1767a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1767A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767A0u;
        // 0x1767a4: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1767a0) {
            ctx->pc = 0x1767B8u;
            goto label_1767b8;
        }
    }
    // 0x1767a8: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1767a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1767ac: 0x431021  addu        $v0, $v0, $v1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1767b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1767B0u;
    {
        const bool branch_taken_0x1767b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1767B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767B0u;
        // 0x1767b4: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1767b0) {
            ctx->pc = 0x1767BCu;
            goto label_1767bc;
        }
    }
label_1767b8:
    // 0x1767b8: 0x182d  daddu       $v1, $zero, $zero
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1767bc:
    // 0x1767bc: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1767bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1767c0: 0x202d  daddu       $a0, $zero, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1767c4: 0x34420008  ori         $v0, $v0, 0x8
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1767c8: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1767c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1767cc: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x1767ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1767d0: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1767D0u;
    {
        const bool branch_taken_0x1767d0 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1767D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767D0u;
        // 0x1767d4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1767d0) {
            ctx->pc = 0x1767E0u;
            goto label_1767e0;
        }
    }
    // 0x1767d8: 0x242102a  slt         $v0, $s2, $v0
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1767dc: 0x40202d  daddu       $a0, $v0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1767e0:
    // 0x1767e0: 0x308200ff  andi        $v0, $a0, 0xFF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1767e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1767E4u;
    {
        const bool branch_taken_0x1767e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1767E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767E4u;
        // 0x1767e8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1767e4) {
            ctx->pc = 0x1767FCu;
            goto label_1767fc;
        }
    }
    // 0x1767ec: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1767ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1767f0: 0x431021  addu        $v0, $v0, $v1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1767f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1767F4u;
    {
        const bool branch_taken_0x1767f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1767F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767F4u;
        // 0x1767f8: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1767f4) {
            ctx->pc = 0x176800u;
            goto label_176800;
        }
    }
label_1767fc:
    // 0x1767fc: 0x182d  daddu       $v1, $zero, $zero
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176800:
    // 0x176800: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x176800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x176804: 0x202d  daddu       $a0, $zero, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176808: 0x34420010  ori         $v0, $v0, 0x10
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x17680c: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x17680cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x176810: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x176810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x176814: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x176814u;
    {
        const bool branch_taken_0x176814 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x176818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176814u;
        // 0x176818: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176814) {
            ctx->pc = 0x176824u;
            goto label_176824;
        }
    }
    // 0x17681c: 0x242102a  slt         $v0, $s2, $v0
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x176820: 0x40202d  daddu       $a0, $v0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176824:
    // 0x176824: 0x308200ff  andi        $v0, $a0, 0xFF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x176828: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x176828u;
    {
        const bool branch_taken_0x176828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176828u;
        // 0x17682c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176828) {
            ctx->pc = 0x176840u;
            goto label_176840;
        }
    }
    // 0x176830: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x176830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x176834: 0x431021  addu        $v0, $v0, $v1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176838: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x176838u;
    {
        const bool branch_taken_0x176838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176838u;
        // 0x17683c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176838) {
            ctx->pc = 0x176844u;
            goto label_176844;
        }
    }
label_176840:
    // 0x176840: 0x202d  daddu       $a0, $zero, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176844:
    // 0x176844: 0xc054074  jal         func_1501D0
    SET_GPR_U32(ctx, 31, 0x17684Cu);
    ctx->pc = 0x176848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176844u;
    // 0x176848: 0x8e650250  lw          $a1, 0x250($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 592)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001501D0_0x1501d0, 0x1501d0u, 0x17684cu)) {
        return;
    }
label_17684c:
    // 0x17684c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x17684cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176850: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x176850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x176854: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x176854u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x176858: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x176858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17685c: 0x3c013d4c  lui         $at, 0x3D4C
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x176860: 0x3421cccd  ori         $at, $at, 0xCCCD
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x176864: 0x4481a000  mtc1        $at, $f20
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x176868: 0xc0c7408  jal         func_31D020
    SET_GPR_U32(ctx, 31, 0x176870u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x176868u, 0x176870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_176870:
    // 0x176870: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x176870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176874: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x176878: 0x3c013da3  lui         $at, 0x3DA3
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x17687c: 0x3421d70a  ori         $at, $at, 0xD70A
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x176880: 0x4481a800  mtc1        $at, $f21
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x176884: 0x46000840  add.s       $f1, $f1, $f0
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x176888: 0xc0c7400  jal         func_31D000
    SET_GPR_U32(ctx, 31, 0x176890u);
    ctx->pc = 0x17688Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176888u;
    // 0x17688c: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x176888u, 0x176890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_176890:
    // 0x176890: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x176894: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x176894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176898: 0x46000840  add.s       $f1, $f1, $f0
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17689c: 0xc0c7408  jal         func_31D020
    SET_GPR_U32(ctx, 31, 0x1768A4u);
    ctx->pc = 0x1768A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17689Cu;
    // 0x1768a0: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x17689Cu, 0x1768A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_1768a4:
    // 0x1768a4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1768a8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1768a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1768ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1768b0: 0xc0c7408  jal         func_31D020
    SET_GPR_U32(ctx, 31, 0x1768B8u);
    ctx->pc = 0x1768B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1768B0u;
    // 0x1768b4: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1768B0u, 0x1768B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_1768b8:
    // 0x1768b8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1768bc: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1768bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1768c0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1768c4: 0xc0c7408  jal         func_31D020
    SET_GPR_U32(ctx, 31, 0x1768CCu);
    ctx->pc = 0x1768C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1768C4u;
    // 0x1768c8: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1768C4u, 0x1768CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_1768cc:
    // 0x1768cc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1768d0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1768d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1768d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1768d8: 0xc0c7408  jal         func_31D020
    SET_GPR_U32(ctx, 31, 0x1768E0u);
    ctx->pc = 0x1768DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1768D8u;
    // 0x1768dc: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1768D8u, 0x1768E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_1768e0:
    // 0x1768e0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1768e4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1768e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1768e8: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1768e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1768ec: 0x102d  daddu       $v0, $zero, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1768f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1768f4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1768f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1768f8: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1768F8u;
    {
        const bool branch_taken_0x1768f8 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1768FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1768F8u;
        // 0x1768fc: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1768f8) {
            ctx->pc = 0x176904u;
            goto label_176904;
        }
    }
    // 0x176900: 0x243102a  slt         $v0, $s2, $v1
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_176904:
    // 0x176904: 0x304200ff  andi        $v0, $v0, 0xFF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x176908: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x176908u;
    {
        const bool branch_taken_0x176908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176908u;
        // 0x17690c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176908) {
            ctx->pc = 0x176920u;
            goto label_176920;
        }
    }
    // 0x176910: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x176910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x176914: 0x431021  addu        $v0, $v0, $v1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176918: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x176918u;
    {
        const bool branch_taken_0x176918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176918u;
        // 0x17691c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176918) {
            ctx->pc = 0x176924u;
            goto label_176924;
        }
    }
label_176920:
    // 0x176920: 0x102d  daddu       $v0, $zero, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176924:
    // 0x176924: 0x24510080  addiu       $s1, $v0, 0x80
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x176928: 0x24100060  addiu       $s0, $zero, 0x60
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x17692c: 0x2501018  mult        $v0, $s2, $s0
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x176930: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176934: 0x3c01bca3  lui         $at, 0xBCA3
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x176938: 0x3421d70a  ori         $at, $at, 0xD70A
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x17693c: 0x4481a000  mtc1        $at, $f20
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x176940: 0x538021  addu        $s0, $v0, $s3
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x176944: 0x26100610  addiu       $s0, $s0, 0x610
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x176948: 0xc05bd90  jal         func_16F640
    SET_GPR_U32(ctx, 31, 0x176950u);
    ctx->pc = 0x17694Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176948u;
    // 0x17694c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj0000_Set_Byte_54_0x16f640, 0x16f640u, 0x176950u)) {
        return;
    }
label_176950:
    // 0x176950: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176954: 0xc05ce66  jal         func_173998
    SET_GPR_U32(ctx, 31, 0x17695Cu);
    ctx->pc = 0x176958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176954u;
    // 0x176958: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj0000_Set_Field_50_173998_0x173998, 0x173998u, 0x17695cu)) {
        return;
    }
label_17695c:
    // 0x17695c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176960: 0xc051f18  jal         func_147C60
    SET_GPR_U32(ctx, 31, 0x176968u);
    ctx->pc = 0x176964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176960u;
    // 0x176964: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &ForwardVec3At30_147C60_0x147c60, 0x147c60u, 0x176968u)) {
        return;
    }
label_176968:
    // 0x176968: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17696c: 0x220282d  daddu       $a1, $s1, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176970: 0xc051f22  jal         func_147C88
    SET_GPR_U32(ctx, 31, 0x176978u);
    ctx->pc = 0x176974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176970u;
    // 0x176974: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00147C88_0x147c88, 0x147c88u, 0x176978u)) {
        return;
    }
label_176978:
    // 0x176978: 0x27a50010  addiu       $a1, $sp, 0x10
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17697c: 0xc05ce42  jal         func_173908
    SET_GPR_U32(ctx, 31, 0x176984u);
    ctx->pc = 0x176980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17697Cu;
    // 0x176980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CopyVec3ToField20_173908_0x173908, 0x173908u, 0x176984u)) {
        return;
    }
label_176984:
    // 0x176984: 0x27a50020  addiu       $a1, $sp, 0x20
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x176988: 0xc05ce4e  jal         func_173938
    SET_GPR_U32(ctx, 31, 0x176990u);
    ctx->pc = 0x17698Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176988u;
    // 0x17698c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CopyVec3ToField30_173938_0x173938, 0x173938u, 0x176990u)) {
        return;
    }
label_176990:
    // 0x176990: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x176994: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176998: 0x27a20030  addiu       $v0, $sp, 0x30
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17699c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769a0: 0x40282d  daddu       $a1, $v0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769a4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1769a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1769a8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1769a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1769ac: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1769acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1769b0: 0xc05ce5a  jal         func_173968
    SET_GPR_U32(ctx, 31, 0x1769B8u);
    ctx->pc = 0x1769B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1769B0u;
    // 0x1769b4: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CopyVec3ToField40_173968_0x173968, 0x173968u, 0x1769b8u)) {
        return;
    }
label_1769b8:
    // 0x1769b8: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x1769b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1769bc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1769bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1769c0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1769c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1769c4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1769c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1769c8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1769c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1769cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1769ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1769d0: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1769d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1769d4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1769d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1769d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1769D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1769DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1769D8u;
        // 0x1769dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1769D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1769E0u;
}