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

// Function: func_001A34C0
// Address: 0x1a34c0 - 0x1a37f0
void func_001A34C0_0x1a34c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A34C0_0x1a34c0");
#endif

    switch (ctx->pc) {
        case 0x1a35b4u: goto label_1a35b4;
        case 0x1a35e8u: goto label_1a35e8;
        case 0x1a3608u: goto label_1a3608;
        case 0x1a3628u: goto label_1a3628;
        case 0x1a363cu: goto label_1a363c;
        case 0x1a3650u: goto label_1a3650;
        case 0x1a3664u: goto label_1a3664;
        case 0x1a3680u: goto label_1a3680;
        case 0x1a36a0u: goto label_1a36a0;
        case 0x1a36b4u: goto label_1a36b4;
        case 0x1a36c8u: goto label_1a36c8;
        case 0x1a36dcu: goto label_1a36dc;
        case 0x1a36f0u: goto label_1a36f0;
        case 0x1a3760u: goto label_1a3760;
        case 0x1a376cu: goto label_1a376c;
        case 0x1a3778u: goto label_1a3778;
        case 0x1a3788u: goto label_1a3788;
        case 0x1a3794u: goto label_1a3794;
        case 0x1a37a0u: goto label_1a37a0;
        case 0x1a37c8u: goto label_1a37c8;
        default: break;
    }

    ctx->pc = 0x1a34c0u;

    // 0x1a34c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1a34c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1a34c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a34c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a34c8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1a34c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1a34cc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1a34ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1a34d0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a34d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a34d4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1a34d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1a34d8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1a34d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a34dc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1a34dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1a34e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a34e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a34e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a34e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a34e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a34e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a34ec: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1a34ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1a34f0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1a34f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1a34f4: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1a34f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1a34f8: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A34F8u;
    {
        const bool branch_taken_0x1a34f8 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1A34FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34F8u;
        // 0x1a34fc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34f8) {
            ctx->pc = 0x1A3504u;
            goto label_1a3504;
        }
    }
    ctx->pc = 0x1A3500u;
    // 0x1a3500: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1a3500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a3504:
    // 0x1a3504: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a3504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a3508: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3508u;
    {
        const bool branch_taken_0x1a3508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3508u;
        // 0x1a350c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3508) {
            ctx->pc = 0x1A3520u;
            goto label_1a3520;
        }
    }
    ctx->pc = 0x1A3510u;
    // 0x1a3510: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1a3510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1a3514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a3514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a3518: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3518u;
    {
        const bool branch_taken_0x1a3518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3518u;
        // 0x1a351c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3518) {
            ctx->pc = 0x1A3524u;
            goto label_1a3524;
        }
    }
    ctx->pc = 0x1A3520u;
label_1a3520:
    // 0x1a3520: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a3520u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3524:
    // 0x1a3524: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1a3524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1a3528: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a3528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a352c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1a352cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1a3530: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1a3530u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1a3534: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x1a3534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1a3538: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3538u;
    {
        const bool branch_taken_0x1a3538 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1A353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3538u;
        // 0x1a353c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3538) {
            ctx->pc = 0x1A3548u;
            goto label_1a3548;
        }
    }
    ctx->pc = 0x1A3540u;
    // 0x1a3540: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a3540u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a3544: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3548:
    // 0x1a3548: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1a3548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a354c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A354Cu;
    {
        const bool branch_taken_0x1a354c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A354Cu;
        // 0x1a3550: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a354c) {
            ctx->pc = 0x1A3564u;
            goto label_1a3564;
        }
    }
    ctx->pc = 0x1A3554u;
    // 0x1a3554: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1a3554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1a3558: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a3558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a355c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A355Cu;
    {
        const bool branch_taken_0x1a355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A355Cu;
        // 0x1a3560: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a355c) {
            ctx->pc = 0x1A3568u;
            goto label_1a3568;
        }
    }
    ctx->pc = 0x1A3564u;
label_1a3564:
    // 0x1a3564: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a3564u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3568:
    // 0x1a3568: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1a3568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1a356c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a356cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3570: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1a3570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1a3574: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1a3574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1a3578: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x1a3578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1a357c: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A357Cu;
    {
        const bool branch_taken_0x1a357c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1A3580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A357Cu;
        // 0x1a3580: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a357c) {
            ctx->pc = 0x1A358Cu;
            goto label_1a358c;
        }
    }
    ctx->pc = 0x1A3584u;
    // 0x1a3584: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a3584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a3588: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a358c:
    // 0x1a358c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1a358cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a3590: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3590u;
    {
        const bool branch_taken_0x1a3590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3590u;
        // 0x1a3594: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3590) {
            ctx->pc = 0x1A35A8u;
            goto label_1a35a8;
        }
    }
    ctx->pc = 0x1A3598u;
    // 0x1a3598: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1a3598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1a359c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a359cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a35a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A35A0u;
    {
        const bool branch_taken_0x1a35a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A35A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35A0u;
        // 0x1a35a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35a0) {
            ctx->pc = 0x1A35ACu;
            goto label_1a35ac;
        }
    }
    ctx->pc = 0x1A35A8u;
label_1a35a8:
    // 0x1a35a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a35a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a35ac:
    // 0x1a35ac: 0xc054074  jal         func_1501D0
    ctx->pc = 0x1A35ACu;
    SET_GPR_U32(ctx, 31, 0x1A35B4u);
    ctx->pc = 0x1A35B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A35ACu;
    // 0x1a35b0: 0x8e650250  lw          $a1, 0x250($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x1A35ACu, 0x1A35B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A35B4u;
label_1a35b4:
    // 0x1a35b4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1a35b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a35b8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a35b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a35bc: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1a35bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a35c0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1a35c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a35c4: 0x92630d9f  lbu         $v1, 0xD9F($s3)
    ctx->pc = 0x1a35c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3487)));
    // 0x1a35c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a35c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a35cc: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A35CCu;
    {
        const bool branch_taken_0x1a35cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a35cc) {
            ctx->pc = 0x1A366Cu;
            goto label_1a366c;
        }
    }
    ctx->pc = 0x1A35D4u;
    // 0x1a35d4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1a35d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1a35d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a35d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a35dc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1a35dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1a35e0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A35E0u;
    SET_GPR_U32(ctx, 31, 0x1A35E8u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A35E0u, 0x1A35E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A35E8u;
label_1a35e8:
    // 0x1a35e8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1a35e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a35ec: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1a35ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1a35f0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1a35f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1a35f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a35f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a35f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a35f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a35fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a35fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a3600: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x1A3600u;
    SET_GPR_U32(ctx, 31, 0x1A3608u);
    ctx->pc = 0x1A3604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3600u;
    // 0x1a3604: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1A3600u, 0x1A3608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3608u;
label_1a3608:
    // 0x1a3608: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1a3608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1a360c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a360cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a3610: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a3610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a3614: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1a3614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3618: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a3618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a361c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a361cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a3620: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A3620u;
    SET_GPR_U32(ctx, 31, 0x1A3628u);
    ctx->pc = 0x1A3624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3620u;
    // 0x1a3624: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A3620u, 0x1A3628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3628u;
label_1a3628:
    // 0x1a3628: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1a3628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1a362c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1a362cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3630: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a3630u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a3634: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A3634u;
    SET_GPR_U32(ctx, 31, 0x1A363Cu);
    ctx->pc = 0x1A3638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3634u;
    // 0x1a3638: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A3634u, 0x1A363Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A363Cu;
label_1a363c:
    // 0x1a363c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a363cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a3640: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1a3640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3644: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a3644u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a3648: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A3648u;
    SET_GPR_U32(ctx, 31, 0x1A3650u);
    ctx->pc = 0x1A364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3648u;
    // 0x1a364c: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A3648u, 0x1A3650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3650u;
label_1a3650:
    // 0x1a3650: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a3650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a3654: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1a3654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3658: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a3658u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a365c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A365Cu;
    SET_GPR_U32(ctx, 31, 0x1A3664u);
    ctx->pc = 0x1A3660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A365Cu;
    // 0x1a3660: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A365Cu, 0x1A3664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3664u;
label_1a3664:
    // 0x1a3664: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1A3664u;
    {
        const bool branch_taken_0x1a3664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3664u;
        // 0x1a3668: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3664) {
            ctx->pc = 0x1A36F4u;
            goto label_1a36f4;
        }
    }
    ctx->pc = 0x1A366Cu;
label_1a366c:
    // 0x1a366c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1a366cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1a3670: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a3670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a3674: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a3674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a3678: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A3678u;
    SET_GPR_U32(ctx, 31, 0x1A3680u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A3678u, 0x1A3680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3680u;
label_1a3680:
    // 0x1a3680: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1a3680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3684: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a3684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a3688: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1a3688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x1a368c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a368cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a3690: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1a3690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1a3694: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a3694u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a3698: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x1A3698u;
    SET_GPR_U32(ctx, 31, 0x1A36A0u);
    ctx->pc = 0x1A369Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3698u;
    // 0x1a369c: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1A3698u, 0x1A36A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36A0u;
label_1a36a0:
    // 0x1a36a0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a36a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a36a4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1a36a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a36a8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a36a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a36ac: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A36ACu;
    SET_GPR_U32(ctx, 31, 0x1A36B4u);
    ctx->pc = 0x1A36B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36ACu;
    // 0x1a36b0: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A36ACu, 0x1A36B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36B4u;
label_1a36b4:
    // 0x1a36b4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a36b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a36b8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1a36b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a36bc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a36bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a36c0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A36C0u;
    SET_GPR_U32(ctx, 31, 0x1A36C8u);
    ctx->pc = 0x1A36C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36C0u;
    // 0x1a36c4: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A36C0u, 0x1A36C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36C8u;
label_1a36c8:
    // 0x1a36c8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1a36c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1a36cc: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1a36ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a36d0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a36d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a36d4: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A36D4u;
    SET_GPR_U32(ctx, 31, 0x1A36DCu);
    ctx->pc = 0x1A36D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36D4u;
    // 0x1a36d8: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A36D4u, 0x1A36DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36DCu;
label_1a36dc:
    // 0x1a36dc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1a36dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1a36e0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1a36e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a36e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a36e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a36e8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A36E8u;
    SET_GPR_U32(ctx, 31, 0x1A36F0u);
    ctx->pc = 0x1A36ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36E8u;
    // 0x1a36ec: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A36E8u, 0x1A36F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36F0u;
label_1a36f0:
    // 0x1a36f0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1a36f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1a36f4:
    // 0x1a36f4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1a36f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a36f8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a36f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a36fc: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1a36fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1a3700: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1a3700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1a3704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a3704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3708: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3708u;
    {
        const bool branch_taken_0x1a3708 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1A370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3708u;
        // 0x1a370c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3708) {
            ctx->pc = 0x1A3714u;
            goto label_1a3714;
        }
    }
    ctx->pc = 0x1A3710u;
    // 0x1a3710: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1a3710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a3714:
    // 0x1a3714: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a3714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a3718: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3718u;
    {
        const bool branch_taken_0x1a3718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3718u;
        // 0x1a371c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3718) {
            ctx->pc = 0x1A3730u;
            goto label_1a3730;
        }
    }
    ctx->pc = 0x1A3720u;
    // 0x1a3720: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1a3720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1a3724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a3724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a3728: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3728u;
    {
        const bool branch_taken_0x1a3728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3728u;
        // 0x1a372c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3728) {
            ctx->pc = 0x1A3734u;
            goto label_1a3734;
        }
    }
    ctx->pc = 0x1A3730u;
label_1a3730:
    // 0x1a3730: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a3730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3734:
    // 0x1a3734: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1a3734u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1a3738: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x1a3738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1a373c: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x1a373cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a3740: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a3740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3744: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1a3744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1a3748: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a3748u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a374c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a374cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a3750: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x1a3750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1a3754: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x1a3754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1a3758: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1A3758u;
    SET_GPR_U32(ctx, 31, 0x1A3760u);
    ctx->pc = 0x1A375Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3758u;
    // 0x1a375c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1A3758u, 0x1A3760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3760u;
label_1a3760:
    // 0x1a3760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3764: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1A3764u;
    SET_GPR_U32(ctx, 31, 0x1A376Cu);
    ctx->pc = 0x1A3768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3764u;
    // 0x1a3768: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1A3764u, 0x1A376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A376Cu;
label_1a376c:
    // 0x1a376c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a376cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3770: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1A3770u;
    SET_GPR_U32(ctx, 31, 0x1A3778u);
    ctx->pc = 0x1A3774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3770u;
    // 0x1a3774: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1A3770u, 0x1A3778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3778u;
label_1a3778:
    // 0x1a3778: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a3778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a377c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a377cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3780: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1A3780u;
    SET_GPR_U32(ctx, 31, 0x1A3788u);
    ctx->pc = 0x1A3784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3780u;
    // 0x1a3784: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1A3780u, 0x1A3788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3788u;
label_1a3788:
    // 0x1a3788: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1a3788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a378c: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1A378Cu;
    SET_GPR_U32(ctx, 31, 0x1A3794u);
    ctx->pc = 0x1A3790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A378Cu;
    // 0x1a3790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1A378Cu, 0x1A3794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3794u;
label_1a3794:
    // 0x1a3794: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1a3794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a3798: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x1A3798u;
    SET_GPR_U32(ctx, 31, 0x1A37A0u);
    ctx->pc = 0x1A379Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3798u;
    // 0x1a379c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1A3798u, 0x1A37A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A37A0u;
label_1a37a0:
    // 0x1a37a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a37a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a37a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a37a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a37a8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a37a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a37ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a37acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a37b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a37b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a37b4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a37b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a37b8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1a37b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1a37bc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1a37bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1a37c0: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x1A37C0u;
    SET_GPR_U32(ctx, 31, 0x1A37C8u);
    ctx->pc = 0x1A37C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A37C0u;
    // 0x1a37c4: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x1A37C0u, 0x1A37C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A37C8u;
label_1a37c8:
    // 0x1a37c8: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x1a37c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1a37cc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1a37ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a37d0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1a37d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a37d4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1a37d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a37d8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1a37d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a37dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a37dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a37e0: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1a37e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a37e4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1a37e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a37e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A37E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A37ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37E8u;
        // 0x1a37ec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A37E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A37F0u;
}
