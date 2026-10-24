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

// Function: func_001915D8
// Address: 0x1915d8 - 0x191860
void func_001915D8_0x1915d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001915D8_0x1915d8");
#endif

    switch (ctx->pc) {
        case 0x1916ccu: goto label_1916cc;
        case 0x1916f0u: goto label_1916f0;
        case 0x191710u: goto label_191710;
        case 0x191724u: goto label_191724;
        case 0x191738u: goto label_191738;
        case 0x19174cu: goto label_19174c;
        case 0x191760u: goto label_191760;
        case 0x1917d0u: goto label_1917d0;
        case 0x1917dcu: goto label_1917dc;
        case 0x1917e8u: goto label_1917e8;
        case 0x1917f8u: goto label_1917f8;
        case 0x191804u: goto label_191804;
        case 0x191810u: goto label_191810;
        case 0x191838u: goto label_191838;
        default: break;
    }

    ctx->pc = 0x1915d8u;

    // 0x1915d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1915d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1915dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1915dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915e0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1915e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1915e4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1915e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1915e8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1915e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915ec: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1915ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1915f0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1915f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915f4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1915f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1915f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1915f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915fc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1915fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x191600: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x191600u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191604: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x191604u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x191608: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x191608u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x19160c: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x19160cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x191610: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x191610u;
    {
        const bool branch_taken_0x191610 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x191614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191610u;
        // 0x191614: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191610) {
            ctx->pc = 0x19161Cu;
            goto label_19161c;
        }
    }
    ctx->pc = 0x191618u;
    // 0x191618: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x191618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19161c:
    // 0x19161c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19161cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x191620: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x191620u;
    {
        const bool branch_taken_0x191620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191620u;
        // 0x191624: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191620) {
            ctx->pc = 0x191638u;
            goto label_191638;
        }
    }
    ctx->pc = 0x191628u;
    // 0x191628: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x191628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x19162c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19162cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191630: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x191630u;
    {
        const bool branch_taken_0x191630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191630u;
        // 0x191634: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191630) {
            ctx->pc = 0x19163Cu;
            goto label_19163c;
        }
    }
    ctx->pc = 0x191638u;
label_191638:
    // 0x191638: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x191638u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19163c:
    // 0x19163c: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x19163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x191640: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x191640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191644: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x191644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x191648: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x191648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x19164c: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x19164cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x191650: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x191650u;
    {
        const bool branch_taken_0x191650 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x191654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191650u;
        // 0x191654: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191650) {
            ctx->pc = 0x191660u;
            goto label_191660;
        }
    }
    ctx->pc = 0x191658u;
    // 0x191658: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x191658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19165c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19165cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191660:
    // 0x191660: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x191660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x191664: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x191664u;
    {
        const bool branch_taken_0x191664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191664u;
        // 0x191668: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191664) {
            ctx->pc = 0x19167Cu;
            goto label_19167c;
        }
    }
    ctx->pc = 0x19166Cu;
    // 0x19166c: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x19166cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x191670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191674: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x191674u;
    {
        const bool branch_taken_0x191674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191674u;
        // 0x191678: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191674) {
            ctx->pc = 0x191680u;
            goto label_191680;
        }
    }
    ctx->pc = 0x19167Cu;
label_19167c:
    // 0x19167c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19167cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191680:
    // 0x191680: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x191680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x191684: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x191684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191688: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x191688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x19168c: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x19168cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x191690: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x191690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x191694: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x191694u;
    {
        const bool branch_taken_0x191694 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x191698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191694u;
        // 0x191698: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191694) {
            ctx->pc = 0x1916A4u;
            goto label_1916a4;
        }
    }
    ctx->pc = 0x19169Cu;
    // 0x19169c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x19169cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1916a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1916a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1916a4:
    // 0x1916a4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1916a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1916a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1916A8u;
    {
        const bool branch_taken_0x1916a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1916ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916A8u;
        // 0x1916ac: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1916a8) {
            ctx->pc = 0x1916C0u;
            goto label_1916c0;
        }
    }
    ctx->pc = 0x1916B0u;
    // 0x1916b0: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1916b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1916b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1916b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1916b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1916B8u;
    {
        const bool branch_taken_0x1916b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1916BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916B8u;
        // 0x1916bc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1916b8) {
            ctx->pc = 0x1916C4u;
            goto label_1916c4;
        }
    }
    ctx->pc = 0x1916C0u;
label_1916c0:
    // 0x1916c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1916c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1916c4:
    // 0x1916c4: 0xc054074  jal         func_1501D0
    ctx->pc = 0x1916C4u;
    SET_GPR_U32(ctx, 31, 0x1916CCu);
    ctx->pc = 0x1916C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1916C4u;
    // 0x1916c8: 0x8e650250  lw          $a1, 0x250($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x1916C4u, 0x1916CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1916CCu;
label_1916cc:
    // 0x1916cc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1916ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1916d0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1916d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1916d4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1916d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1916d8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1916d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1916dc: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1916dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1916e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1916e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1916e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1916e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1916e8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1916E8u;
    SET_GPR_U32(ctx, 31, 0x1916F0u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1916E8u, 0x1916F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1916F0u;
label_1916f0:
    // 0x1916f0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1916f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1916f4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1916f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1916f8: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1916f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x1916fc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1916fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x191700: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x191700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x191704: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x191704u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x191708: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x191708u;
    SET_GPR_U32(ctx, 31, 0x191710u);
    ctx->pc = 0x19170Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191708u;
    // 0x19170c: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x191708u, 0x191710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191710u;
label_191710:
    // 0x191710: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x191710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x191714: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x191714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191718: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x191718u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19171c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x19171Cu;
    SET_GPR_U32(ctx, 31, 0x191724u);
    ctx->pc = 0x191720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19171Cu;
    // 0x191720: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x19171Cu, 0x191724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191724u;
label_191724:
    // 0x191724: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x191724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x191728: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x191728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19172c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19172cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x191730: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x191730u;
    SET_GPR_U32(ctx, 31, 0x191738u);
    ctx->pc = 0x191734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191730u;
    // 0x191734: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x191730u, 0x191738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191738u;
label_191738:
    // 0x191738: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x191738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x19173c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x19173cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191740: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x191740u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x191744: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x191744u;
    SET_GPR_U32(ctx, 31, 0x19174Cu);
    ctx->pc = 0x191748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191744u;
    // 0x191748: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x191744u, 0x19174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19174Cu;
label_19174c:
    // 0x19174c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x19174cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x191750: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x191750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191754: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x191754u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x191758: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x191758u;
    SET_GPR_U32(ctx, 31, 0x191760u);
    ctx->pc = 0x19175Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191758u;
    // 0x19175c: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x191758u, 0x191760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191760u;
label_191760:
    // 0x191760: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x191760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x191764: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x191764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191768: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x191768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x19176c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19176cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191770: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x191770u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x191774: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x191774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x191778: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x191778u;
    {
        const bool branch_taken_0x191778 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x19177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191778u;
        // 0x19177c: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x191778) {
            ctx->pc = 0x191784u;
            goto label_191784;
        }
    }
    ctx->pc = 0x191780u;
    // 0x191780: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x191780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_191784:
    // 0x191784: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x191784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x191788: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x191788u;
    {
        const bool branch_taken_0x191788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191788u;
        // 0x19178c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191788) {
            ctx->pc = 0x1917A0u;
            goto label_1917a0;
        }
    }
    ctx->pc = 0x191790u;
    // 0x191790: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x191790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x191794: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191798: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x191798u;
    {
        const bool branch_taken_0x191798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191798u;
        // 0x19179c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191798) {
            ctx->pc = 0x1917A4u;
            goto label_1917a4;
        }
    }
    ctx->pc = 0x1917A0u;
label_1917a0:
    // 0x1917a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1917a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1917a4:
    // 0x1917a4: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1917a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1917a8: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x1917a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1917ac: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x1917acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1917b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1917b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1917b4: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1917b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1917b8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1917b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1917bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1917bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1917c0: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x1917c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1917c4: 0x26100620  addiu       $s0, $s0, 0x620
    ctx->pc = 0x1917c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x1917c8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1917C8u;
    SET_GPR_U32(ctx, 31, 0x1917D0u);
    ctx->pc = 0x1917CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1917C8u;
    // 0x1917cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1917C8u, 0x1917D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1917D0u;
label_1917d0:
    // 0x1917d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1917d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1917d4: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1917D4u;
    SET_GPR_U32(ctx, 31, 0x1917DCu);
    ctx->pc = 0x1917D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1917D4u;
    // 0x1917d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1917D4u, 0x1917DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1917DCu;
label_1917dc:
    // 0x1917dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1917dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1917e0: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1917E0u;
    SET_GPR_U32(ctx, 31, 0x1917E8u);
    ctx->pc = 0x1917E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1917E0u;
    // 0x1917e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1917E0u, 0x1917E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1917E8u;
label_1917e8:
    // 0x1917e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1917e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1917ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1917ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1917f0: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1917F0u;
    SET_GPR_U32(ctx, 31, 0x1917F8u);
    ctx->pc = 0x1917F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1917F0u;
    // 0x1917f4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1917F0u, 0x1917F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1917F8u;
label_1917f8:
    // 0x1917f8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1917f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1917fc: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1917FCu;
    SET_GPR_U32(ctx, 31, 0x191804u);
    ctx->pc = 0x191800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1917FCu;
    // 0x191800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1917FCu, 0x191804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191804u;
label_191804:
    // 0x191804: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x191804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x191808: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x191808u;
    SET_GPR_U32(ctx, 31, 0x191810u);
    ctx->pc = 0x19180Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191808u;
    // 0x19180c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x191808u, 0x191810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191810u;
label_191810:
    // 0x191810: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x191810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x191814: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x191814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191818: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x191818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19181c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19181cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191820: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x191820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191824: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x191824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x191828: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x191828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x19182c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x19182cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x191830: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x191830u;
    SET_GPR_U32(ctx, 31, 0x191838u);
    ctx->pc = 0x191834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191830u;
    // 0x191834: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x191830u, 0x191838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191838u;
label_191838:
    // 0x191838: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x191838u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x19183c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x19183cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x191840: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x191840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x191844: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x191844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x191848: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x191848u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19184c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19184cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x191850: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x191850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x191854: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x191854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x191858: 0x3e00008  jr          $ra
    ctx->pc = 0x191858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191858u;
        // 0x19185c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191860u;
}
