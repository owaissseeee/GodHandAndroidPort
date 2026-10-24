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

// Function: sceDread
// Address: 0x3b5520 - 0x3b56a0
void sceDread_0x3b5520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDread_0x3b5520");
#endif

    switch (ctx->pc) {
        case 0x3b5548u: goto label_3b5548;
        case 0x3b5554u: goto label_3b5554;
        case 0x3b5580u: goto label_3b5580;
        case 0x3b55b0u: goto label_3b55b0;
        case 0x3b5600u: goto label_3b5600;
        case 0x3b5610u: goto label_3b5610;
        case 0x3b5618u: goto label_3b5618;
        case 0x3b562cu: goto label_3b562c;
        case 0x3b563cu: goto label_3b563c;
        case 0x3b564cu: goto label_3b564c;
        case 0x3b5654u: goto label_3b5654;
        default: break;
    }

    ctx->pc = 0x3b5520u;

    // 0x3b5520: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3b5520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3b5524: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x3b5524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x3b5528: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x3b5528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x3b552c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b552cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5530: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3b5530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3b5534: 0x3c130078  lui         $s3, 0x78
    ctx->pc = 0x3b5534u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)120 << 16));
    // 0x3b5538: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3b5538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x3b553c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3b553cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3b5540: 0xc0ece92  jal         func_3B3A48
    ctx->pc = 0x3B5540u;
    SET_GPR_U32(ctx, 31, 0x3B5548u);
    ctx->pc = 0x3B5544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5540u;
    // 0x3b5544: 0x2672ffc0  addiu       $s2, $s3, -0x40 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3A48u, 0x3B5540u, 0x3B5548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5548u;
label_3b5548:
    // 0x3b5548: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b5548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b554c: 0xc0ecfb2  jal         func_3B3EC8
    ctx->pc = 0x3B554Cu;
    SET_GPR_U32(ctx, 31, 0x3B5554u);
    ctx->pc = 0x3B5550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B554Cu;
    // 0x3b5550: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EC8u, 0x3B554Cu, 0x3B5554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5554u;
label_3b5554:
    // 0x3b5554: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b5554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3b5558: 0x8c43aedc  lw          $v1, -0x5124($v0)
    ctx->pc = 0x3b5558u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAEDCu));
    // 0x3b555c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B555Cu;
    {
        const bool branch_taken_0x3b555c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b555c) {
            ctx->pc = 0x3B5578u;
            goto label_3b5578;
        }
    }
    ctx->pc = 0x3B5564u;
    // 0x3b5564: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B5564u;
    {
        const bool branch_taken_0x3b5564 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5564) {
            ctx->pc = 0x3B5578u;
            goto label_3b5578;
        }
    }
    ctx->pc = 0x3B556Cu;
    // 0x3b556c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3b556cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b5570: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B5570u;
    {
        const bool branch_taken_0x3b5570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b5570) {
            ctx->pc = 0x3B5574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5570u;
            // 0x3b5574: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5588u;
            goto label_3b5588;
        }
    }
    ctx->pc = 0x3B5578u;
label_3b5578:
    // 0x3b5578: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B5578u;
    SET_GPR_U32(ctx, 31, 0x3B5580u);
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B5578u, 0x3B5580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5580u;
label_3b5580:
    // 0x3b5580: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x3B5580u;
    {
        const bool branch_taken_0x3b5580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5580u;
        // 0x3b5584: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5580) {
            ctx->pc = 0x3B5658u;
            goto label_3b5658;
        }
    }
    ctx->pc = 0x3B5588u;
label_3b5588:
    // 0x3b5588: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3b5588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3b558c: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x3b558cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    // 0x3b5590: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x3b5590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x3b5594: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x3b5594u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x3b5598: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b5598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b559c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3b559cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b55a0: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x3b55a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x3b55a4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3b55a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x3b55a8: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3B55A8u;
    SET_GPR_U32(ctx, 31, 0x3B55B0u);
    ctx->pc = 0x3B55ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B55A8u;
    // 0x3b55ac: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3B55A8u, 0x3B55B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B55B0u;
label_3b55b0:
    // 0x3b55b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b55b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b55b4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3b55b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b55b8: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3b55b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x3b55bc: 0xae71ffc0  sw          $s1, -0x40($s3)
    ctx->pc = 0x3b55bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294967232), GPR_U32(ctx, 17));
    // 0x3b55c0: 0x24500c00  addiu       $s0, $v0, 0xC00
    ctx->pc = 0x3b55c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x3b55c4: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x3b55c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x3b55c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3b55c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b55cc: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x3b55ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
    // 0x3b55d0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3b55d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x3b55d4: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x3b55d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
    // 0x3b55d8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3b55d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b55dc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3b55dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3b55e0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b55e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3b55e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b55e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b55e8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3b55e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3b55ec: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x3b55ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3b55f0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3b55f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b55f4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3b55f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b55f8: 0xc0ece56  jal         func_3B3958
    ctx->pc = 0x3B55F8u;
    SET_GPR_U32(ctx, 31, 0x3B5600u);
    ctx->pc = 0x3B55FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B55F8u;
    // 0x3b55fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3958u, 0x3B55F8u, 0x3B5600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5600u;
label_3b5600:
    // 0x3b5600: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B5600u;
    {
        const bool branch_taken_0x3b5600 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3B5604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5600u;
        // 0x3b5604: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5600) {
            ctx->pc = 0x3B5620u;
            goto label_3b5620;
        }
    }
    ctx->pc = 0x3B5608u;
    // 0x3b5608: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B5608u;
    SET_GPR_U32(ctx, 31, 0x3B5610u);
    ctx->pc = 0x3B560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5608u;
    // 0x3b560c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B5608u, 0x3B5610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5610u;
label_3b5610:
    // 0x3b5610: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B5610u;
    SET_GPR_U32(ctx, 31, 0x3B5618u);
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B5610u, 0x3B5618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5618u;
label_3b5618:
    // 0x3b5618: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3B5618u;
    {
        const bool branch_taken_0x3b5618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5618u;
        // 0x3b561c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5618) {
            ctx->pc = 0x3B5658u;
            goto label_3b5658;
        }
    }
    ctx->pc = 0x3B5620u;
label_3b5620:
    // 0x3b5620: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x3b5620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3b5624: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B5624u;
    SET_GPR_U32(ctx, 31, 0x3B562Cu);
    ctx->pc = 0x3B5628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5624u;
    // 0x3b5628: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B5624u, 0x3B562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B562Cu;
label_3b562c:
    // 0x3b562c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B562Cu;
    {
        const bool branch_taken_0x3b562c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b562c) {
            ctx->pc = 0x3B5644u;
            goto label_3b5644;
        }
    }
    ctx->pc = 0x3B5634u;
    // 0x3b5634: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B5634u;
    SET_GPR_U32(ctx, 31, 0x3B563Cu);
    ctx->pc = 0x3B5638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5634u;
    // 0x3b5638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B5634u, 0x3B563Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B563Cu;
label_3b563c:
    // 0x3b563c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B563Cu;
    {
        const bool branch_taken_0x3b563c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B563Cu;
        // 0x3b5640: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b563c) {
            ctx->pc = 0x3B5658u;
            goto label_3b5658;
        }
    }
    ctx->pc = 0x3B5644u;
label_3b5644:
    // 0x3b5644: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B5644u;
    SET_GPR_U32(ctx, 31, 0x3B564Cu);
    ctx->pc = 0x3B5648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5644u;
    // 0x3b5648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B5644u, 0x3B564Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B564Cu;
label_3b564c:
    // 0x3b564c: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B564Cu;
    SET_GPR_U32(ctx, 31, 0x3B5654u);
    ctx->pc = 0x3B5650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B564Cu;
    // 0x3b5650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B564Cu, 0x3B5654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5654u;
label_3b5654:
    // 0x3b5654: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3b5654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3b5658:
    // 0x3b5658: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3b5658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b565c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x3b565cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b5660: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3b5660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b5664: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x3b5664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b5668: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3b5668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b566c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B566Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B566Cu;
        // 0x3b5670: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B566Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5674u;
    // 0x3b5674: 0x0  nop
    ctx->pc = 0x3b5674u;
    // NOP
    // 0x3b5678: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x3b5678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3b567c: 0x0  nop
    ctx->pc = 0x3b567cu;
    // NOP
    // 0x3b5680: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x3b5680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3b5684: 0x0  nop
    ctx->pc = 0x3b5684u;
    // NOP
    // 0x3b5688: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3b5688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b568c: 0x0  nop
    ctx->pc = 0x3b568cu;
    // NOP
    // 0x3b5690: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x3b5690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3b5694: 0x0  nop
    ctx->pc = 0x3b5694u;
    // NOP
    // 0x3b5698: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3b5698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b569c: 0x0  nop
    ctx->pc = 0x3b569cu;
    // NOP
    ctx->pc = 0x3b56a0u;
}
