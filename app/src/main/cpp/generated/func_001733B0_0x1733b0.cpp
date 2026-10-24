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

// Function: func_001733B0
// Address: 0x1733b0 - 0x173638
void func_001733B0_0x1733b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001733B0_0x1733b0");
#endif

    switch (ctx->pc) {
        case 0x1734a4u: goto label_1734a4;
        case 0x1734c8u: goto label_1734c8;
        case 0x1734e8u: goto label_1734e8;
        case 0x1734fcu: goto label_1734fc;
        case 0x173510u: goto label_173510;
        case 0x173524u: goto label_173524;
        case 0x173538u: goto label_173538;
        case 0x1735a8u: goto label_1735a8;
        case 0x1735b4u: goto label_1735b4;
        case 0x1735c0u: goto label_1735c0;
        case 0x1735d0u: goto label_1735d0;
        case 0x1735dcu: goto label_1735dc;
        case 0x1735e8u: goto label_1735e8;
        case 0x173610u: goto label_173610;
        default: break;
    }

    ctx->pc = 0x1733b0u;

    // 0x1733b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1733b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1733b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1733b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1733b8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1733b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1733bc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1733bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1733c0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1733c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1733c4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1733c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1733c8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1733c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1733cc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1733ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1733d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1733d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1733d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1733d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1733d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1733d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1733dc: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1733dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1733e0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1733e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1733e4: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1733e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1733e8: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1733E8u;
    {
        const bool branch_taken_0x1733e8 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1733ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1733E8u;
        // 0x1733ec: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1733e8) {
            ctx->pc = 0x1733F4u;
            goto label_1733f4;
        }
    }
    ctx->pc = 0x1733F0u;
    // 0x1733f0: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1733f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1733f4:
    // 0x1733f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1733f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1733f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1733F8u;
    {
        const bool branch_taken_0x1733f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1733FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1733F8u;
        // 0x1733fc: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1733f8) {
            ctx->pc = 0x173410u;
            goto label_173410;
        }
    }
    ctx->pc = 0x173400u;
    // 0x173400: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x173400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x173404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173408: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x173408u;
    {
        const bool branch_taken_0x173408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173408u;
        // 0x17340c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173408) {
            ctx->pc = 0x173414u;
            goto label_173414;
        }
    }
    ctx->pc = 0x173410u;
label_173410:
    // 0x173410: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x173410u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173414:
    // 0x173414: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x173414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x173418: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x173418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17341c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x17341cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x173420: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x173420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x173424: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x173424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x173428: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x173428u;
    {
        const bool branch_taken_0x173428 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x17342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173428u;
        // 0x17342c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173428) {
            ctx->pc = 0x173438u;
            goto label_173438;
        }
    }
    ctx->pc = 0x173430u;
    // 0x173430: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x173430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x173434: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173438:
    // 0x173438: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x173438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x17343c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17343Cu;
    {
        const bool branch_taken_0x17343c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17343Cu;
        // 0x173440: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17343c) {
            ctx->pc = 0x173454u;
            goto label_173454;
        }
    }
    ctx->pc = 0x173444u;
    // 0x173444: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x173444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x173448: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17344c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17344Cu;
    {
        const bool branch_taken_0x17344c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17344Cu;
        // 0x173450: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17344c) {
            ctx->pc = 0x173458u;
            goto label_173458;
        }
    }
    ctx->pc = 0x173454u;
label_173454:
    // 0x173454: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x173454u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173458:
    // 0x173458: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x173458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x17345c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17345cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173460: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x173460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x173464: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x173464u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x173468: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x173468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x17346c: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17346Cu;
    {
        const bool branch_taken_0x17346c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x173470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17346Cu;
        // 0x173470: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17346c) {
            ctx->pc = 0x17347Cu;
            goto label_17347c;
        }
    }
    ctx->pc = 0x173474u;
    // 0x173474: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x173474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x173478: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17347c:
    // 0x17347c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x17347cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x173480: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x173480u;
    {
        const bool branch_taken_0x173480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173480u;
        // 0x173484: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173480) {
            ctx->pc = 0x173498u;
            goto label_173498;
        }
    }
    ctx->pc = 0x173488u;
    // 0x173488: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x173488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x17348c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17348cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173490: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x173490u;
    {
        const bool branch_taken_0x173490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173490u;
        // 0x173494: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173490) {
            ctx->pc = 0x17349Cu;
            goto label_17349c;
        }
    }
    ctx->pc = 0x173498u;
label_173498:
    // 0x173498: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x173498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17349c:
    // 0x17349c: 0xc054074  jal         func_1501D0
    ctx->pc = 0x17349Cu;
    SET_GPR_U32(ctx, 31, 0x1734A4u);
    ctx->pc = 0x1734A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17349Cu;
    // 0x1734a0: 0x8e650250  lw          $a1, 0x250($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x17349Cu, 0x1734A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1734A4u;
label_1734a4:
    // 0x1734a4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1734a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1734a8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1734a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1734ac: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1734acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1734b0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1734b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1734b4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1734b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1734b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1734b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1734bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1734bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1734c0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1734C0u;
    SET_GPR_U32(ctx, 31, 0x1734C8u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1734C0u, 0x1734C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1734C8u;
label_1734c8:
    // 0x1734c8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1734c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1734cc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1734ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1734d0: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1734d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x1734d4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1734d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1734d8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1734d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1734dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1734dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1734e0: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x1734E0u;
    SET_GPR_U32(ctx, 31, 0x1734E8u);
    ctx->pc = 0x1734E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1734E0u;
    // 0x1734e4: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1734E0u, 0x1734E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1734E8u;
label_1734e8:
    // 0x1734e8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1734e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1734ec: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1734ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1734f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1734f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1734f4: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1734F4u;
    SET_GPR_U32(ctx, 31, 0x1734FCu);
    ctx->pc = 0x1734F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1734F4u;
    // 0x1734f8: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1734F4u, 0x1734FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1734FCu;
label_1734fc:
    // 0x1734fc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1734fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x173500: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x173500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173504: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x173504u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x173508: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x173508u;
    SET_GPR_U32(ctx, 31, 0x173510u);
    ctx->pc = 0x17350Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173508u;
    // 0x17350c: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x173508u, 0x173510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173510u;
label_173510:
    // 0x173510: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x173510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x173514: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x173514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173518: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x173518u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17351c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x17351Cu;
    SET_GPR_U32(ctx, 31, 0x173524u);
    ctx->pc = 0x173520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17351Cu;
    // 0x173520: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x17351Cu, 0x173524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173524u;
label_173524:
    // 0x173524: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x173524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x173528: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x173528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17352c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17352cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x173530: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x173530u;
    SET_GPR_U32(ctx, 31, 0x173538u);
    ctx->pc = 0x173534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173530u;
    // 0x173534: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x173530u, 0x173538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173538u;
label_173538:
    // 0x173538: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x173538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x17353c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x17353cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173540: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x173540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x173544: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x173544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173548: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x173548u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17354c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x17354cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x173550: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x173550u;
    {
        const bool branch_taken_0x173550 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x173554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173550u;
        // 0x173554: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x173550) {
            ctx->pc = 0x17355Cu;
            goto label_17355c;
        }
    }
    ctx->pc = 0x173558u;
    // 0x173558: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x173558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17355c:
    // 0x17355c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17355cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x173560: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x173560u;
    {
        const bool branch_taken_0x173560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173560u;
        // 0x173564: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173560) {
            ctx->pc = 0x173578u;
            goto label_173578;
        }
    }
    ctx->pc = 0x173568u;
    // 0x173568: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x173568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x17356c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17356cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173570: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x173570u;
    {
        const bool branch_taken_0x173570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173570u;
        // 0x173574: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173570) {
            ctx->pc = 0x17357Cu;
            goto label_17357c;
        }
    }
    ctx->pc = 0x173578u;
label_173578:
    // 0x173578: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x173578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17357c:
    // 0x17357c: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x17357cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x173580: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x173580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x173584: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x173584u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x173588: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x173588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17358c: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x17358cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x173590: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x173590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x173594: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x173594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x173598: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x173598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x17359c: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x17359cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1735a0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1735A0u;
    SET_GPR_U32(ctx, 31, 0x1735A8u);
    ctx->pc = 0x1735A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1735A0u;
    // 0x1735a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1735A0u, 0x1735A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1735A8u;
label_1735a8:
    // 0x1735a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1735a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1735ac: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1735ACu;
    SET_GPR_U32(ctx, 31, 0x1735B4u);
    ctx->pc = 0x1735B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1735ACu;
    // 0x1735b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1735ACu, 0x1735B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1735B4u;
label_1735b4:
    // 0x1735b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1735b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1735b8: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1735B8u;
    SET_GPR_U32(ctx, 31, 0x1735C0u);
    ctx->pc = 0x1735BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1735B8u;
    // 0x1735bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1735B8u, 0x1735C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1735C0u;
label_1735c0:
    // 0x1735c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1735c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1735c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1735c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1735c8: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1735C8u;
    SET_GPR_U32(ctx, 31, 0x1735D0u);
    ctx->pc = 0x1735CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1735C8u;
    // 0x1735cc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1735C8u, 0x1735D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1735D0u;
label_1735d0:
    // 0x1735d0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1735d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1735d4: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1735D4u;
    SET_GPR_U32(ctx, 31, 0x1735DCu);
    ctx->pc = 0x1735D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1735D4u;
    // 0x1735d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1735D4u, 0x1735DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1735DCu;
label_1735dc:
    // 0x1735dc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1735dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1735e0: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x1735E0u;
    SET_GPR_U32(ctx, 31, 0x1735E8u);
    ctx->pc = 0x1735E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1735E0u;
    // 0x1735e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1735E0u, 0x1735E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1735E8u;
label_1735e8:
    // 0x1735e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1735e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1735ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1735ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1735f0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1735f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1735f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1735f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1735f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1735f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1735fc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1735fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x173600: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x173600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x173604: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x173604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x173608: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x173608u;
    SET_GPR_U32(ctx, 31, 0x173610u);
    ctx->pc = 0x17360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173608u;
    // 0x17360c: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x173608u, 0x173610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173610u;
label_173610:
    // 0x173610: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x173610u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x173614: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x173614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x173618: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x173618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17361c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x17361cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x173620: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x173620u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x173624: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x173624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x173628: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x173628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17362c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x17362cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x173630: 0x3e00008  jr          $ra
    ctx->pc = 0x173630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173630u;
        // 0x173634: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173638u;
}
