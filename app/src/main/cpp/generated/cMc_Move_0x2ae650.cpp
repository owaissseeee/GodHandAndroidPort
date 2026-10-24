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

// Function: cMc_Move
// Address: 0x2ae650 - 0x2ae718
void cMc_Move_0x2ae650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMc_Move_0x2ae650");
#endif

    switch (ctx->pc) {
        case 0x2ae650u: goto label_2ae650;
        case 0x2ae654u: goto label_2ae654;
        case 0x2ae658u: goto label_2ae658;
        case 0x2ae65cu: goto label_2ae65c;
        case 0x2ae660u: goto label_2ae660;
        case 0x2ae664u: goto label_2ae664;
        case 0x2ae668u: goto label_2ae668;
        case 0x2ae66cu: goto label_2ae66c;
        case 0x2ae670u: goto label_2ae670;
        case 0x2ae674u: goto label_2ae674;
        case 0x2ae678u: goto label_2ae678;
        case 0x2ae67cu: goto label_2ae67c;
        case 0x2ae680u: goto label_2ae680;
        case 0x2ae684u: goto label_2ae684;
        case 0x2ae688u: goto label_2ae688;
        case 0x2ae68cu: goto label_2ae68c;
        case 0x2ae690u: goto label_2ae690;
        case 0x2ae694u: goto label_2ae694;
        case 0x2ae698u: goto label_2ae698;
        case 0x2ae69cu: goto label_2ae69c;
        case 0x2ae6a0u: goto label_2ae6a0;
        case 0x2ae6a4u: goto label_2ae6a4;
        case 0x2ae6a8u: goto label_2ae6a8;
        case 0x2ae6acu: goto label_2ae6ac;
        case 0x2ae6b0u: goto label_2ae6b0;
        case 0x2ae6b4u: goto label_2ae6b4;
        case 0x2ae6b8u: goto label_2ae6b8;
        case 0x2ae6bcu: goto label_2ae6bc;
        case 0x2ae6c0u: goto label_2ae6c0;
        case 0x2ae6c4u: goto label_2ae6c4;
        case 0x2ae6c8u: goto label_2ae6c8;
        case 0x2ae6ccu: goto label_2ae6cc;
        case 0x2ae6d0u: goto label_2ae6d0;
        case 0x2ae6d4u: goto label_2ae6d4;
        case 0x2ae6d8u: goto label_2ae6d8;
        case 0x2ae6dcu: goto label_2ae6dc;
        case 0x2ae6e0u: goto label_2ae6e0;
        case 0x2ae6e4u: goto label_2ae6e4;
        case 0x2ae6e8u: goto label_2ae6e8;
        case 0x2ae6ecu: goto label_2ae6ec;
        case 0x2ae6f0u: goto label_2ae6f0;
        case 0x2ae6f4u: goto label_2ae6f4;
        case 0x2ae6f8u: goto label_2ae6f8;
        case 0x2ae6fcu: goto label_2ae6fc;
        case 0x2ae700u: goto label_2ae700;
        case 0x2ae704u: goto label_2ae704;
        case 0x2ae708u: goto label_2ae708;
        case 0x2ae70cu: goto label_2ae70c;
        case 0x2ae710u: goto label_2ae710;
        case 0x2ae714u: goto label_2ae714;
        default: break;
    }

    ctx->pc = 0x2ae650u;

label_2ae650:
    // 0x2ae650: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2ae650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_2ae654:
    // 0x2ae654: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ae654u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2ae658:
    // 0x2ae658: 0x8c44aff0  lw          $a0, -0x5010($v0)
    ctx->pc = 0x2ae658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946800)));
label_2ae65c:
    // 0x2ae65c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ae65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2ae660:
    // 0x2ae660: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ae660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2ae664:
    // 0x2ae664: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ae664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2ae668:
    // 0x2ae668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ae668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ae66c:
    // 0x2ae66c: 0xc04e180  jal         func_138600
label_2ae670:
    if (ctx->pc == 0x2AE670u) {
        ctx->pc = 0x2AE674u;
        goto label_2ae674;
    }
    ctx->pc = 0x2AE66Cu;
    SET_GPR_U32(ctx, 31, 0x2AE674u);
    ctx->pc = 0x138600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138600u, 0x2AE66Cu, 0x2AE674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE674u;
label_2ae674:
    // 0x2ae674: 0xc0c3c8a  jal         func_30F228
label_2ae678:
    if (ctx->pc == 0x2AE678u) {
        ctx->pc = 0x2AE67Cu;
        goto label_2ae67c;
    }
    ctx->pc = 0x2AE674u;
    SET_GPR_U32(ctx, 31, 0x2AE67Cu);
    ctx->pc = 0x30F228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F228u, 0x2AE674u, 0x2AE67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE67Cu;
label_2ae67c:
    // 0x2ae67c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2ae67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2ae680:
    // 0x2ae680: 0xc0abbea  jal         func_2AEFA8
label_2ae684:
    if (ctx->pc == 0x2AE684u) {
        ctx->pc = 0x2AE684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE680u;
        // 0x2ae684: 0x8c4423a4  lw          $a0, 0x23A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE688u;
        goto label_2ae688;
    }
    ctx->pc = 0x2AE680u;
    SET_GPR_U32(ctx, 31, 0x2AE688u);
    ctx->pc = 0x2AE684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE680u;
    // 0x2ae684: 0x8c4423a4  lw          $a0, 0x23A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEFA8u, 0x2AE680u, 0x2AE688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE688u;
label_2ae688:
    // 0x2ae688: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2ae688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2ae68c:
    // 0x2ae68c: 0xc050396  jal         func_140E58
label_2ae690:
    if (ctx->pc == 0x2AE690u) {
        ctx->pc = 0x2AE690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE68Cu;
        // 0x2ae690: 0x8c44d6e8  lw          $a0, -0x2918($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE694u;
        goto label_2ae694;
    }
    ctx->pc = 0x2AE68Cu;
    SET_GPR_U32(ctx, 31, 0x2AE694u);
    ctx->pc = 0x2AE690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE68Cu;
    // 0x2ae690: 0x8c44d6e8  lw          $a0, -0x2918($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140E58u, 0x2AE68Cu, 0x2AE694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE694u;
label_2ae694:
    // 0x2ae694: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2ae694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
label_2ae698:
    // 0x2ae698: 0x8c434c58  lw          $v1, 0x4C58($v0)
    ctx->pc = 0x2ae698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19544)));
label_2ae69c:
    // 0x2ae69c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2ae69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2ae6a0:
    // 0x2ae6a0: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x2ae6a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2ae6a4:
    // 0x2ae6a4: 0x12040015  beq         $s0, $a0, . + 4 + (0x15 << 2)
label_2ae6a8:
    if (ctx->pc == 0x2AE6A8u) {
        ctx->pc = 0x2AE6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE6A4u;
        // 0x2ae6a8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE6ACu;
        goto label_2ae6ac;
    }
    ctx->pc = 0x2AE6A4u;
    {
        const bool branch_taken_0x2ae6a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2AE6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE6A4u;
        // 0x2ae6a8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae6a4) {
            ctx->pc = 0x2AE6FCu;
            goto label_2ae6fc;
        }
    }
    ctx->pc = 0x2AE6ACu;
label_2ae6ac:
    // 0x2ae6ac: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x2ae6acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
label_2ae6b0:
    // 0x2ae6b0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ae6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ae6b4:
    // 0x2ae6b4: 0x0  nop
    ctx->pc = 0x2ae6b4u;
    // NOP
label_2ae6b8:
    // 0x2ae6b8: 0x8ca30250  lw          $v1, 0x250($a1)
    ctx->pc = 0x2ae6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
label_2ae6bc:
    // 0x2ae6bc: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x2ae6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_2ae6c0:
    // 0x2ae6c0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2ae6c4:
    if (ctx->pc == 0x2AE6C4u) {
        ctx->pc = 0x2AE6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE6C0u;
        // 0x2ae6c4: 0x8e434c58  lw          $v1, 0x4C58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE6C8u;
        goto label_2ae6c8;
    }
    ctx->pc = 0x2AE6C0u;
    {
        const bool branch_taken_0x2ae6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae6c0) {
            ctx->pc = 0x2AE6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE6C0u;
            // 0x2ae6c4: 0x8e434c58  lw          $v1, 0x4C58($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE6ECu;
            goto label_2ae6ec;
        }
    }
    ctx->pc = 0x2AE6C8u;
label_2ae6c8:
    // 0x2ae6c8: 0x711024  and         $v0, $v1, $s1
    ctx->pc = 0x2ae6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
label_2ae6cc:
    // 0x2ae6cc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2ae6d0:
    if (ctx->pc == 0x2AE6D0u) {
        ctx->pc = 0x2AE6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE6CCu;
        // 0x2ae6d0: 0x8e434c58  lw          $v1, 0x4C58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE6D4u;
        goto label_2ae6d4;
    }
    ctx->pc = 0x2AE6CCu;
    {
        const bool branch_taken_0x2ae6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE6CCu;
        // 0x2ae6d0: 0x8e434c58  lw          $v1, 0x4C58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae6cc) {
            ctx->pc = 0x2AE6ECu;
            goto label_2ae6ec;
        }
    }
    ctx->pc = 0x2AE6D4u;
label_2ae6d4:
    // 0x2ae6d4: 0x8ca20214  lw          $v0, 0x214($a1)
    ctx->pc = 0x2ae6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_2ae6d8:
    // 0x2ae6d8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x2ae6d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_2ae6dc:
    // 0x2ae6dc: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2ae6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2ae6e0:
    // 0x2ae6e0: 0x60f809  jalr        $v1
label_2ae6e4:
    if (ctx->pc == 0x2AE6E4u) {
        ctx->pc = 0x2AE6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE6E0u;
        // 0x2ae6e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE6E8u;
        goto label_2ae6e8;
    }
    ctx->pc = 0x2AE6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2AE6E8u);
        ctx->pc = 0x2AE6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE6E0u;
        // 0x2ae6e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE6E0u, 0x2AE6E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AE6E8u;
label_2ae6e8:
    // 0x2ae6e8: 0x8e434c58  lw          $v1, 0x4C58($s2)
    ctx->pc = 0x2ae6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19544)));
label_2ae6ec:
    // 0x2ae6ec: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ae6ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2ae6f0:
    // 0x2ae6f0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2ae6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2ae6f4:
    // 0x2ae6f4: 0x5602fff0  bnel        $s0, $v0, . + 4 + (-0x10 << 2)
label_2ae6f8:
    if (ctx->pc == 0x2AE6F8u) {
        ctx->pc = 0x2AE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE6F4u;
        // 0x2ae6f8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE6FCu;
        goto label_2ae6fc;
    }
    ctx->pc = 0x2AE6F4u;
    {
        const bool branch_taken_0x2ae6f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ae6f4) {
            ctx->pc = 0x2AE6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE6F4u;
            // 0x2ae6f8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE6B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae6b8;
        }
    }
    ctx->pc = 0x2AE6FCu;
label_2ae6fc:
    // 0x2ae6fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ae6fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ae700:
    // 0x2ae700: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ae700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ae704:
    // 0x2ae704: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ae704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ae708:
    // 0x2ae708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ae708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ae70c:
    // 0x2ae70c: 0x3e00008  jr          $ra
label_2ae710:
    if (ctx->pc == 0x2AE710u) {
        ctx->pc = 0x2AE710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE70Cu;
        // 0x2ae710: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE714u;
        goto label_2ae714;
    }
    ctx->pc = 0x2AE70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE70Cu;
        // 0x2ae710: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE714u;
label_2ae714:
    // 0x2ae714: 0x0  nop
    ctx->pc = 0x2ae714u;
    // NOP
    ctx->pc = 0x2ae718u;
}
