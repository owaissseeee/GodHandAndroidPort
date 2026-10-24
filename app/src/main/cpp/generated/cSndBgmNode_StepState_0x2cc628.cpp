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

// Function: cSndBgmNode_StepState
// Address: 0x2cc628 - 0x2cc728
void cSndBgmNode_StepState_0x2cc628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndBgmNode_StepState_0x2cc628");
#endif

    switch (ctx->pc) {
        case 0x2cc644u: goto label_2cc644;
        case 0x2cc654u: goto label_2cc654;
        case 0x2cc670u: goto label_2cc670;
        case 0x2cc680u: goto label_2cc680;
        case 0x2cc688u: goto label_2cc688;
        case 0x2cc6c4u: goto label_2cc6c4;
        case 0x2cc6d4u: goto label_2cc6d4;
        case 0x2cc6e4u: goto label_2cc6e4;
        case 0x2cc6f4u: goto label_2cc6f4;
        case 0x2cc710u: goto label_2cc710;
        default: break;
    }

    ctx->pc = 0x2cc628u;

    // 0x2cc628: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cc628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cc62c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2cc62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2cc630: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cc630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cc634: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2cc634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2cc638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc63c: 0xc0b315a  jal         func_2CC568
    ctx->pc = 0x2CC63Cu;
    SET_GPR_U32(ctx, 31, 0x2CC644u);
    ctx->pc = 0x2CC640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC63Cu;
    // 0x2cc640: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC568u, 0x2CC63Cu, 0x2CC644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC644u;
label_2cc644:
    // 0x2cc644: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x2CC644u;
    {
        const bool branch_taken_0x2cc644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc644) {
            ctx->pc = 0x2CC648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC644u;
            // 0x2cc648: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC714u;
            goto label_2cc714;
        }
    }
    ctx->pc = 0x2CC64Cu;
    // 0x2cc64c: 0xc0dce94  jal         func_373A50
    ctx->pc = 0x2CC64Cu;
    SET_GPR_U32(ctx, 31, 0x2CC654u);
    ctx->pc = 0x2CC650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC64Cu;
    // 0x2cc650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A50u, 0x2CC64Cu, 0x2CC654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC654u;
label_2cc654:
    // 0x2cc654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cc654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc658: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2CC658u;
    {
        const bool branch_taken_0x2cc658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cc658) {
            ctx->pc = 0x2CC65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC658u;
            // 0x2cc65c: 0x8e030094  lw          $v1, 0x94($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC698u;
            goto label_2cc698;
        }
    }
    ctx->pc = 0x2CC660u;
    // 0x2cc660: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2cc660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2cc664: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cc664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc668: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CC668u;
    {
        const bool branch_taken_0x2cc668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC668u;
        // 0x2cc66c: 0x2452ee00  addiu       $s2, $v0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc668) {
            ctx->pc = 0x2CC680u;
            goto label_2cc680;
        }
    }
    ctx->pc = 0x2CC670u;
label_2cc670:
    // 0x2cc670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cc674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc678: 0xc0dce68  jal         func_3739A0
    ctx->pc = 0x2CC678u;
    SET_GPR_U32(ctx, 31, 0x2CC680u);
    ctx->pc = 0x2CC67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC678u;
    // 0x2cc67c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3739A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3739A0u, 0x2CC678u, 0x2CC680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC680u;
label_2cc680:
    // 0x2cc680: 0xc0dcecc  jal         func_373B30
    ctx->pc = 0x2CC680u;
    SET_GPR_U32(ctx, 31, 0x2CC688u);
    ctx->pc = 0x2CC684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC680u;
    // 0x2cc684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B30u, 0x2CC680u, 0x2CC688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC688u;
label_2cc688:
    // 0x2cc688: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2cc688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cc68c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CC68Cu;
    {
        const bool branch_taken_0x2cc68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc68c) {
            ctx->pc = 0x2CC690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC68Cu;
            // 0x2cc690: 0xc64c006c  lwc1        $f12, 0x6C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc670;
        }
    }
    ctx->pc = 0x2CC694u;
    // 0x2cc694: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x2cc694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2cc698:
    // 0x2cc698: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2cc698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2cc69c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CC69Cu;
    {
        const bool branch_taken_0x2cc69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC69Cu;
        // 0x2cc6a0: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc69c) {
            ctx->pc = 0x2CC6F4u;
            goto label_2cc6f4;
        }
    }
    ctx->pc = 0x2CC6A4u;
    // 0x2cc6a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cc6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cc6a8: 0x2442ce90  addiu       $v0, $v0, -0x3170
    ctx->pc = 0x2cc6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954640));
    // 0x2cc6ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cc6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cc6b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cc6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cc6b4: 0x800008  jr          $a0
    ctx->pc = 0x2CC6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CC6BCu: goto label_2cc6bc;
            case 0x2CC6CCu: goto label_2cc6cc;
            case 0x2CC6DCu: goto label_2cc6dc;
            case 0x2CC6ECu: goto label_2cc6ec;
            case 0x2CC6F4u: goto label_2cc6f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC6B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CC6BCu;
label_2cc6bc:
    // 0x2cc6bc: 0xc0b32fe  jal         func_2CCBF8
    ctx->pc = 0x2CC6BCu;
    SET_GPR_U32(ctx, 31, 0x2CC6C4u);
    ctx->pc = 0x2CC6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC6BCu;
    // 0x2cc6c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCBF8u, 0x2CC6BCu, 0x2CC6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC6C4u;
label_2cc6c4:
    // 0x2cc6c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CC6C4u;
    {
        const bool branch_taken_0x2cc6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6C4u;
        // 0x2cc6c8: 0x8e030098  lw          $v1, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc6c4) {
            ctx->pc = 0x2CC6F8u;
            goto label_2cc6f8;
        }
    }
    ctx->pc = 0x2CC6CCu;
label_2cc6cc:
    // 0x2cc6cc: 0xc0b3360  jal         func_2CCD80
    ctx->pc = 0x2CC6CCu;
    SET_GPR_U32(ctx, 31, 0x2CC6D4u);
    ctx->pc = 0x2CC6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC6CCu;
    // 0x2cc6d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCD80u, 0x2CC6CCu, 0x2CC6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC6D4u;
label_2cc6d4:
    // 0x2cc6d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC6D4u;
    {
        const bool branch_taken_0x2cc6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6D4u;
        // 0x2cc6d8: 0x8e030098  lw          $v1, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc6d4) {
            ctx->pc = 0x2CC6F8u;
            goto label_2cc6f8;
        }
    }
    ctx->pc = 0x2CC6DCu;
label_2cc6dc:
    // 0x2cc6dc: 0xc0b3474  jal         func_2CD1D0
    ctx->pc = 0x2CC6DCu;
    SET_GPR_U32(ctx, 31, 0x2CC6E4u);
    ctx->pc = 0x2CC6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC6DCu;
    // 0x2cc6e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD1D0u, 0x2CC6DCu, 0x2CC6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC6E4u;
label_2cc6e4:
    // 0x2cc6e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC6E4u;
    {
        const bool branch_taken_0x2cc6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6E4u;
        // 0x2cc6e8: 0x8e030098  lw          $v1, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc6e4) {
            ctx->pc = 0x2CC6F8u;
            goto label_2cc6f8;
        }
    }
    ctx->pc = 0x2CC6ECu;
label_2cc6ec:
    // 0x2cc6ec: 0xc0b34c4  jal         func_2CD310
    ctx->pc = 0x2CC6ECu;
    SET_GPR_U32(ctx, 31, 0x2CC6F4u);
    ctx->pc = 0x2CC6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC6ECu;
    // 0x2cc6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD310u, 0x2CC6ECu, 0x2CC6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC6F4u;
label_2cc6f4:
    // 0x2cc6f4: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x2cc6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2cc6f8:
    // 0x2cc6f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2cc6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2cc6fc: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x2cc6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x2cc700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc704: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2cc704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cc708: 0xc0dcb2c  jal         func_372CB0
    ctx->pc = 0x2CC708u;
    SET_GPR_U32(ctx, 31, 0x2CC710u);
    ctx->pc = 0x2CC70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC708u;
    // 0x2cc70c: 0xae030098  sw          $v1, 0x98($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372CB0u, 0x2CC708u, 0x2CC710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC710u;
label_2cc710:
    // 0x2cc710: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2cc710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cc714:
    // 0x2cc714: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cc714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc718: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2cc718u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc71c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc720: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC720u;
        // 0x2cc724: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC728u;
}
