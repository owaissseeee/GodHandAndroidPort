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

// Function: func_001987D0
// Address: 0x1987d0 - 0x198a58
void func_001987D0_0x1987d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001987D0_0x1987d0");
#endif

    switch (ctx->pc) {
        case 0x1988c4u: goto label_1988c4;
        case 0x1988e8u: goto label_1988e8;
        case 0x198908u: goto label_198908;
        case 0x19891cu: goto label_19891c;
        case 0x198930u: goto label_198930;
        case 0x198944u: goto label_198944;
        case 0x198958u: goto label_198958;
        case 0x1989c8u: goto label_1989c8;
        case 0x1989d4u: goto label_1989d4;
        case 0x1989e0u: goto label_1989e0;
        case 0x1989f0u: goto label_1989f0;
        case 0x1989fcu: goto label_1989fc;
        case 0x198a08u: goto label_198a08;
        case 0x198a30u: goto label_198a30;
        default: break;
    }

    ctx->pc = 0x1987d0u;

    // 0x1987d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1987d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1987d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1987d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987d8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1987d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1987dc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1987dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1987e0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1987e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987e4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1987e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1987e8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1987e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987ec: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1987ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1987f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1987f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1987f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1987f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1987f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987fc: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1987fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x198800: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x198800u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x198804: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x198804u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x198808: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x198808u;
    {
        const bool branch_taken_0x198808 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x19880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198808u;
        // 0x19880c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198808) {
            ctx->pc = 0x198814u;
            goto label_198814;
        }
    }
    ctx->pc = 0x198810u;
    // 0x198810: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x198810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_198814:
    // 0x198814: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x198814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x198818: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x198818u;
    {
        const bool branch_taken_0x198818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198818u;
        // 0x19881c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198818) {
            ctx->pc = 0x198830u;
            goto label_198830;
        }
    }
    ctx->pc = 0x198820u;
    // 0x198820: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x198820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x198824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x198824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198828: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x198828u;
    {
        const bool branch_taken_0x198828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198828u;
        // 0x19882c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198828) {
            ctx->pc = 0x198834u;
            goto label_198834;
        }
    }
    ctx->pc = 0x198830u;
label_198830:
    // 0x198830: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x198830u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198834:
    // 0x198834: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x198834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x198838: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x198838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19883c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x19883cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x198840: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x198840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x198844: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x198844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x198848: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x198848u;
    {
        const bool branch_taken_0x198848 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x19884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198848u;
        // 0x19884c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198848) {
            ctx->pc = 0x198858u;
            goto label_198858;
        }
    }
    ctx->pc = 0x198850u;
    // 0x198850: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x198850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x198854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x198854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_198858:
    // 0x198858: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x198858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19885c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19885Cu;
    {
        const bool branch_taken_0x19885c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19885Cu;
        // 0x198860: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19885c) {
            ctx->pc = 0x198874u;
            goto label_198874;
        }
    }
    ctx->pc = 0x198864u;
    // 0x198864: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x198864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x198868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x198868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19886c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19886Cu;
    {
        const bool branch_taken_0x19886c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19886Cu;
        // 0x198870: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19886c) {
            ctx->pc = 0x198878u;
            goto label_198878;
        }
    }
    ctx->pc = 0x198874u;
label_198874:
    // 0x198874: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x198874u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198878:
    // 0x198878: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x198878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x19887c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19887cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198880: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x198880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x198884: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x198884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x198888: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x198888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x19888c: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19888Cu;
    {
        const bool branch_taken_0x19888c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x198890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19888Cu;
        // 0x198890: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19888c) {
            ctx->pc = 0x19889Cu;
            goto label_19889c;
        }
    }
    ctx->pc = 0x198894u;
    // 0x198894: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x198894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x198898: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x198898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19889c:
    // 0x19889c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x19889cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1988a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1988A0u;
    {
        const bool branch_taken_0x1988a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1988A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1988A0u;
        // 0x1988a4: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1988a0) {
            ctx->pc = 0x1988B8u;
            goto label_1988b8;
        }
    }
    ctx->pc = 0x1988A8u;
    // 0x1988a8: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1988a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1988ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1988acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1988b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1988B0u;
    {
        const bool branch_taken_0x1988b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1988B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1988B0u;
        // 0x1988b4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1988b0) {
            ctx->pc = 0x1988BCu;
            goto label_1988bc;
        }
    }
    ctx->pc = 0x1988B8u;
label_1988b8:
    // 0x1988b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1988b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1988bc:
    // 0x1988bc: 0xc054074  jal         func_1501D0
    ctx->pc = 0x1988BCu;
    SET_GPR_U32(ctx, 31, 0x1988C4u);
    ctx->pc = 0x1988C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1988BCu;
    // 0x1988c0: 0x8e650250  lw          $a1, 0x250($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x1988BCu, 0x1988C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1988C4u;
label_1988c4:
    // 0x1988c4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1988c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1988c8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1988c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1988cc: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1988ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1988d0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1988d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1988d4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1988d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1988d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1988d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1988dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1988dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1988e0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1988E0u;
    SET_GPR_U32(ctx, 31, 0x1988E8u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1988E0u, 0x1988E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1988E8u;
label_1988e8:
    // 0x1988e8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1988e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1988ec: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1988ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1988f0: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1988f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x1988f4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1988f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1988f8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1988f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1988fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1988fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x198900: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x198900u;
    SET_GPR_U32(ctx, 31, 0x198908u);
    ctx->pc = 0x198904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198900u;
    // 0x198904: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x198900u, 0x198908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198908u;
label_198908:
    // 0x198908: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x198908u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x19890c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x19890cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198910: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x198910u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x198914: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x198914u;
    SET_GPR_U32(ctx, 31, 0x19891Cu);
    ctx->pc = 0x198918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198914u;
    // 0x198918: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x198914u, 0x19891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19891Cu;
label_19891c:
    // 0x19891c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x19891cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x198920: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x198920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198924: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x198924u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x198928: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x198928u;
    SET_GPR_U32(ctx, 31, 0x198930u);
    ctx->pc = 0x19892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198928u;
    // 0x19892c: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x198928u, 0x198930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198930u;
label_198930:
    // 0x198930: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x198930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x198934: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x198934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198938: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x198938u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19893c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x19893Cu;
    SET_GPR_U32(ctx, 31, 0x198944u);
    ctx->pc = 0x198940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19893Cu;
    // 0x198940: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x19893Cu, 0x198944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198944u;
label_198944:
    // 0x198944: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x198944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x198948: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x198948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19894c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19894cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x198950: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x198950u;
    SET_GPR_U32(ctx, 31, 0x198958u);
    ctx->pc = 0x198954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198950u;
    // 0x198954: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x198950u, 0x198958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198958u;
label_198958:
    // 0x198958: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x198958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x19895c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x19895cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198960: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x198960u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x198964: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198968: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x198968u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19896c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19896cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x198970: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x198970u;
    {
        const bool branch_taken_0x198970 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x198974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198970u;
        // 0x198974: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x198970) {
            ctx->pc = 0x19897Cu;
            goto label_19897c;
        }
    }
    ctx->pc = 0x198978u;
    // 0x198978: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x198978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19897c:
    // 0x19897c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19897cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x198980: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x198980u;
    {
        const bool branch_taken_0x198980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198980u;
        // 0x198984: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198980) {
            ctx->pc = 0x198998u;
            goto label_198998;
        }
    }
    ctx->pc = 0x198988u;
    // 0x198988: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x198988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x19898c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19898cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198990: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x198990u;
    {
        const bool branch_taken_0x198990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198990u;
        // 0x198994: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198990) {
            ctx->pc = 0x19899Cu;
            goto label_19899c;
        }
    }
    ctx->pc = 0x198998u;
label_198998:
    // 0x198998: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19899c:
    // 0x19899c: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x19899cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1989a0: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x1989a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1989a4: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x1989a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1989a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1989a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1989ac: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1989acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1989b0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1989b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1989b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1989b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1989b8: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x1989b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1989bc: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x1989bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1989c0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1989C0u;
    SET_GPR_U32(ctx, 31, 0x1989C8u);
    ctx->pc = 0x1989C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1989C0u;
    // 0x1989c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1989C0u, 0x1989C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1989C8u;
label_1989c8:
    // 0x1989c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1989c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989cc: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1989CCu;
    SET_GPR_U32(ctx, 31, 0x1989D4u);
    ctx->pc = 0x1989D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1989CCu;
    // 0x1989d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1989CCu, 0x1989D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1989D4u;
label_1989d4:
    // 0x1989d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1989d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989d8: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1989D8u;
    SET_GPR_U32(ctx, 31, 0x1989E0u);
    ctx->pc = 0x1989DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1989D8u;
    // 0x1989dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1989D8u, 0x1989E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1989E0u;
label_1989e0:
    // 0x1989e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1989e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1989e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989e8: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1989E8u;
    SET_GPR_U32(ctx, 31, 0x1989F0u);
    ctx->pc = 0x1989ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1989E8u;
    // 0x1989ec: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1989E8u, 0x1989F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1989F0u;
label_1989f0:
    // 0x1989f0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1989f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1989f4: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1989F4u;
    SET_GPR_U32(ctx, 31, 0x1989FCu);
    ctx->pc = 0x1989F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1989F4u;
    // 0x1989f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1989F4u, 0x1989FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1989FCu;
label_1989fc:
    // 0x1989fc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1989fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x198a00: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x198A00u;
    SET_GPR_U32(ctx, 31, 0x198A08u);
    ctx->pc = 0x198A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198A00u;
    // 0x198a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x198A00u, 0x198A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A08u;
label_198a08:
    // 0x198a08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x198a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x198a0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x198a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198a10: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x198a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x198a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x198a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a1c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x198a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x198a20: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x198a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x198a24: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x198a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x198a28: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x198A28u;
    SET_GPR_U32(ctx, 31, 0x198A30u);
    ctx->pc = 0x198A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198A28u;
    // 0x198a2c: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x198A28u, 0x198A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A30u;
label_198a30:
    // 0x198a30: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x198a30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x198a34: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x198a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x198a38: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x198a38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x198a3c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x198a3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x198a40: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x198a40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x198a44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x198a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198a48: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x198a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x198a4c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x198a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x198a50: 0x3e00008  jr          $ra
    ctx->pc = 0x198A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A50u;
        // 0x198a54: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198A58u;
}
