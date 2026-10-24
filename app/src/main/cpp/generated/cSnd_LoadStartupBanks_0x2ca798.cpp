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

// Function: cSnd_LoadStartupBanks
// Address: 0x2ca798 - 0x2ca8c8
void cSnd_LoadStartupBanks_0x2ca798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_LoadStartupBanks_0x2ca798");
#endif

    switch (ctx->pc) {
        case 0x2ca7b4u: goto label_2ca7b4;
        case 0x2ca7bcu: goto label_2ca7bc;
        case 0x2ca7d0u: goto label_2ca7d0;
        case 0x2ca7d8u: goto label_2ca7d8;
        case 0x2ca7e0u: goto label_2ca7e0;
        case 0x2ca7ecu: goto label_2ca7ec;
        case 0x2ca7fcu: goto label_2ca7fc;
        case 0x2ca804u: goto label_2ca804;
        case 0x2ca814u: goto label_2ca814;
        case 0x2ca820u: goto label_2ca820;
        case 0x2ca828u: goto label_2ca828;
        case 0x2ca834u: goto label_2ca834;
        case 0x2ca844u: goto label_2ca844;
        case 0x2ca84cu: goto label_2ca84c;
        case 0x2ca858u: goto label_2ca858;
        case 0x2ca868u: goto label_2ca868;
        case 0x2ca874u: goto label_2ca874;
        case 0x2ca87cu: goto label_2ca87c;
        case 0x2ca890u: goto label_2ca890;
        case 0x2ca898u: goto label_2ca898;
        case 0x2ca8a4u: goto label_2ca8a4;
        case 0x2ca8acu: goto label_2ca8ac;
        default: break;
    }

    ctx->pc = 0x2ca798u;

    // 0x2ca798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ca798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ca79c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ca79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca7a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ca7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ca7a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ca7a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca7ac: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CA7ACu;
    SET_GPR_U32(ctx, 31, 0x2CA7B4u);
    ctx->pc = 0x2CA7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA7ACu;
    // 0x2ca7b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CA7ACu, 0x2CA7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA7B4u;
label_2ca7b4:
    // 0x2ca7b4: 0xc0b3cc4  jal         func_2CF310
    ctx->pc = 0x2CA7B4u;
    SET_GPR_U32(ctx, 31, 0x2CA7BCu);
    ctx->pc = 0x2CA7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA7B4u;
    // 0x2ca7b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF310u, 0x2CA7B4u, 0x2CA7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA7BCu;
label_2ca7bc:
    // 0x2ca7bc: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x2ca7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
    // 0x2ca7c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca7c4: 0x24c6ce28  addiu       $a2, $a2, -0x31D8
    ctx->pc = 0x2ca7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954536));
    // 0x2ca7c8: 0xc0b2d8e  jal         func_2CB638
    ctx->pc = 0x2CA7C8u;
    SET_GPR_U32(ctx, 31, 0x2CA7D0u);
    ctx->pc = 0x2CA7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA7C8u;
    // 0x2ca7cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB638u, 0x2CA7C8u, 0x2CA7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA7D0u;
label_2ca7d0:
    // 0x2ca7d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA7D0u;
    {
        const bool branch_taken_0x2ca7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7D0u;
        // 0x2ca7d4: 0x3c110045  lui         $s1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca7d0) {
            ctx->pc = 0x2CA7E0u;
            goto label_2ca7e0;
        }
    }
    ctx->pc = 0x2CA7D8u;
label_2ca7d8:
    // 0x2ca7d8: 0xc0b5494  jal         func_2D5250
    ctx->pc = 0x2CA7D8u;
    SET_GPR_U32(ctx, 31, 0x2CA7E0u);
    ctx->pc = 0x2CA7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA7D8u;
    // 0x2ca7dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5250u, 0x2CA7D8u, 0x2CA7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA7E0u;
label_2ca7e0:
    // 0x2ca7e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca7e4: 0xc0b2dde  jal         func_2CB778
    ctx->pc = 0x2CA7E4u;
    SET_GPR_U32(ctx, 31, 0x2CA7ECu);
    ctx->pc = 0x2CA7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA7E4u;
    // 0x2ca7e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB778u, 0x2CA7E4u, 0x2CA7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA7ECu;
label_2ca7ec:
    // 0x2ca7ec: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CA7ECu;
    {
        const bool branch_taken_0x2ca7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7ECu;
        // 0x2ca7f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca7ec) {
            ctx->pc = 0x2CA7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca7d8;
        }
    }
    ctx->pc = 0x2CA7F4u;
    // 0x2ca7f4: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CA7F4u;
    SET_GPR_U32(ctx, 31, 0x2CA7FCu);
    ctx->pc = 0x2CA7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA7F4u;
    // 0x2ca7f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CA7F4u, 0x2CA7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA7FCu;
label_2ca7fc:
    // 0x2ca7fc: 0xc0b3cc4  jal         func_2CF310
    ctx->pc = 0x2CA7FCu;
    SET_GPR_U32(ctx, 31, 0x2CA804u);
    ctx->pc = 0x2CA800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA7FCu;
    // 0x2ca800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF310u, 0x2CA7FCu, 0x2CA804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA804u;
label_2ca804:
    // 0x2ca804: 0x2626ce30  addiu       $a2, $s1, -0x31D0
    ctx->pc = 0x2ca804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954544));
    // 0x2ca808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca80c: 0xc0b2d8e  jal         func_2CB638
    ctx->pc = 0x2CA80Cu;
    SET_GPR_U32(ctx, 31, 0x2CA814u);
    ctx->pc = 0x2CA810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA80Cu;
    // 0x2ca810: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB638u, 0x2CA80Cu, 0x2CA814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA814u;
label_2ca814:
    // 0x2ca814: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA814u;
    {
        const bool branch_taken_0x2ca814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA814u;
        // 0x2ca818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca814) {
            ctx->pc = 0x2CA82Cu;
            goto label_2ca82c;
        }
    }
    ctx->pc = 0x2CA81Cu;
    // 0x2ca81c: 0x0  nop
    ctx->pc = 0x2ca81cu;
    // NOP
label_2ca820:
    // 0x2ca820: 0xc0b5494  jal         func_2D5250
    ctx->pc = 0x2CA820u;
    SET_GPR_U32(ctx, 31, 0x2CA828u);
    ctx->pc = 0x2CA824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA820u;
    // 0x2ca824: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5250u, 0x2CA820u, 0x2CA828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA828u;
label_2ca828:
    // 0x2ca828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca82c:
    // 0x2ca82c: 0xc0b2dde  jal         func_2CB778
    ctx->pc = 0x2CA82Cu;
    SET_GPR_U32(ctx, 31, 0x2CA834u);
    ctx->pc = 0x2CA830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA82Cu;
    // 0x2ca830: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB778u, 0x2CA82Cu, 0x2CA834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA834u;
label_2ca834:
    // 0x2ca834: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CA834u;
    {
        const bool branch_taken_0x2ca834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA834u;
        // 0x2ca838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca834) {
            ctx->pc = 0x2CA820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca820;
        }
    }
    ctx->pc = 0x2CA83Cu;
    // 0x2ca83c: 0xc0b4b66  jal         func_2D2D98
    ctx->pc = 0x2CA83Cu;
    SET_GPR_U32(ctx, 31, 0x2CA844u);
    ctx->pc = 0x2CA840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA83Cu;
    // 0x2ca840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D98u, 0x2CA83Cu, 0x2CA844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA844u;
label_2ca844:
    // 0x2ca844: 0xc0b3fe4  jal         func_2CFF90
    ctx->pc = 0x2CA844u;
    SET_GPR_U32(ctx, 31, 0x2CA84Cu);
    ctx->pc = 0x2CA848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA844u;
    // 0x2ca848: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF90u, 0x2CA844u, 0x2CA84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA84Cu;
label_2ca84c:
    // 0x2ca84c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca850: 0xc0b4b66  jal         func_2D2D98
    ctx->pc = 0x2CA850u;
    SET_GPR_U32(ctx, 31, 0x2CA858u);
    ctx->pc = 0x2CA854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA850u;
    // 0x2ca854: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D98u, 0x2CA850u, 0x2CA858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA858u;
label_2ca858:
    // 0x2ca858: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ca858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca85c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca860: 0xc0b404a  jal         func_2D0128
    ctx->pc = 0x2CA860u;
    SET_GPR_U32(ctx, 31, 0x2CA868u);
    ctx->pc = 0x2CA864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA860u;
    // 0x2ca864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0128u, 0x2CA860u, 0x2CA868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA868u;
label_2ca868:
    // 0x2ca868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca86c: 0xc0b4b66  jal         func_2D2D98
    ctx->pc = 0x2CA86Cu;
    SET_GPR_U32(ctx, 31, 0x2CA874u);
    ctx->pc = 0x2CA870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA86Cu;
    // 0x2ca870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D98u, 0x2CA86Cu, 0x2CA874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA874u;
label_2ca874:
    // 0x2ca874: 0xc0b3fde  jal         func_2CFF78
    ctx->pc = 0x2CA874u;
    SET_GPR_U32(ctx, 31, 0x2CA87Cu);
    ctx->pc = 0x2CA878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA874u;
    // 0x2ca878: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF78u, 0x2CA874u, 0x2CA87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA87Cu;
label_2ca87c:
    // 0x2ca87c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca880: 0x5043000d  beql        $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2CA880u;
    {
        const bool branch_taken_0x2ca880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ca880) {
            ctx->pc = 0x2CA884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA880u;
            // 0x2ca884: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA8B8u;
            goto label_2ca8b8;
        }
    }
    ctx->pc = 0x2CA888u;
    // 0x2ca888: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA888u;
    {
        const bool branch_taken_0x2ca888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA888u;
        // 0x2ca88c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca888) {
            ctx->pc = 0x2CA89Cu;
            goto label_2ca89c;
        }
    }
    ctx->pc = 0x2CA890u;
label_2ca890:
    // 0x2ca890: 0xc0b5494  jal         func_2D5250
    ctx->pc = 0x2CA890u;
    SET_GPR_U32(ctx, 31, 0x2CA898u);
    ctx->pc = 0x2CA894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA890u;
    // 0x2ca894: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5250u, 0x2CA890u, 0x2CA898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA898u;
label_2ca898:
    // 0x2ca898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca89c:
    // 0x2ca89c: 0xc0b4b66  jal         func_2D2D98
    ctx->pc = 0x2CA89Cu;
    SET_GPR_U32(ctx, 31, 0x2CA8A4u);
    ctx->pc = 0x2CA8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA89Cu;
    // 0x2ca8a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D98u, 0x2CA89Cu, 0x2CA8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA8A4u;
label_2ca8a4:
    // 0x2ca8a4: 0xc0b3fda  jal         func_2CFF68
    ctx->pc = 0x2CA8A4u;
    SET_GPR_U32(ctx, 31, 0x2CA8ACu);
    ctx->pc = 0x2CA8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA8A4u;
    // 0x2ca8a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF68u, 0x2CA8A4u, 0x2CA8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA8ACu;
label_2ca8ac:
    // 0x2ca8ac: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CA8ACu;
    {
        const bool branch_taken_0x2ca8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca8ac) {
            ctx->pc = 0x2CA890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca890;
        }
    }
    ctx->pc = 0x2CA8B4u;
    // 0x2ca8b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ca8b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ca8b8:
    // 0x2ca8b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca8b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca8bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA8C0u;
        // 0x2ca8c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA8C8u;
}
