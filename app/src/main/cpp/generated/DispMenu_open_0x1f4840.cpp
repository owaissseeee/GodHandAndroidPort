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

// Function: DispMenu_open
// Address: 0x1f4840 - 0x1f4928
void DispMenu_open_0x1f4840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DispMenu_open_0x1f4840");
#endif

    switch (ctx->pc) {
        case 0x1f485cu: goto label_1f485c;
        case 0x1f486cu: goto label_1f486c;
        case 0x1f487cu: goto label_1f487c;
        case 0x1f488cu: goto label_1f488c;
        case 0x1f489cu: goto label_1f489c;
        case 0x1f48acu: goto label_1f48ac;
        case 0x1f48bcu: goto label_1f48bc;
        case 0x1f48ccu: goto label_1f48cc;
        case 0x1f48dcu: goto label_1f48dc;
        case 0x1f48ecu: goto label_1f48ec;
        case 0x1f48fcu: goto label_1f48fc;
        case 0x1f4908u: goto label_1f4908;
        case 0x1f4914u: goto label_1f4914;
        default: break;
    }

    ctx->pc = 0x1f4840u;

    // 0x1f4840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f4840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f4844: 0x2405006f  addiu       $a1, $zero, 0x6F
    ctx->pc = 0x1f4844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1f4848: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f4848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f484c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f484cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4854: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4854u;
    SET_GPR_U32(ctx, 31, 0x1F485Cu);
    ctx->pc = 0x1F4858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4854u;
    // 0x1f4858: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4854u, 0x1F485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F485Cu;
label_1f485c:
    // 0x1f485c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f485cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f4860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4864: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4864u;
    SET_GPR_U32(ctx, 31, 0x1F486Cu);
    ctx->pc = 0x1F4868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4864u;
    // 0x1f4868: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4864u, 0x1F486Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F486Cu;
label_1f486c:
    // 0x1f486c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f486cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4870: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f4870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4874: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4874u;
    SET_GPR_U32(ctx, 31, 0x1F487Cu);
    ctx->pc = 0x1F4878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4874u;
    // 0x1f4878: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4874u, 0x1F487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F487Cu;
label_1f487c:
    // 0x1f487c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f487cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4880: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f4880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4884: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4884u;
    SET_GPR_U32(ctx, 31, 0x1F488Cu);
    ctx->pc = 0x1F4888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4884u;
    // 0x1f4888: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4884u, 0x1F488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F488Cu;
label_1f488c:
    // 0x1f488c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f488cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4890: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f4890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f4894: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4894u;
    SET_GPR_U32(ctx, 31, 0x1F489Cu);
    ctx->pc = 0x1F4898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4894u;
    // 0x1f4898: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4894u, 0x1F489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F489Cu;
label_1f489c:
    // 0x1f489c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f489cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f48a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1f48a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f48a4: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F48A4u;
    SET_GPR_U32(ctx, 31, 0x1F48ACu);
    ctx->pc = 0x1F48A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F48A4u;
    // 0x1f48a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F48A4u, 0x1F48ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48ACu;
label_1f48ac:
    // 0x1f48ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f48acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f48b0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f48b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f48b4: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F48B4u;
    SET_GPR_U32(ctx, 31, 0x1F48BCu);
    ctx->pc = 0x1F48B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F48B4u;
    // 0x1f48b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F48B4u, 0x1F48BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48BCu;
label_1f48bc:
    // 0x1f48bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f48bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f48c0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1f48c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f48c4: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F48C4u;
    SET_GPR_U32(ctx, 31, 0x1F48CCu);
    ctx->pc = 0x1F48C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F48C4u;
    // 0x1f48c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F48C4u, 0x1F48CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48CCu;
label_1f48cc:
    // 0x1f48cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f48ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f48d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f48d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f48d4: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F48D4u;
    SET_GPR_U32(ctx, 31, 0x1F48DCu);
    ctx->pc = 0x1F48D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F48D4u;
    // 0x1f48d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F48D4u, 0x1F48DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48DCu;
label_1f48dc:
    // 0x1f48dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f48dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f48e0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f48e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f48e4: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F48E4u;
    SET_GPR_U32(ctx, 31, 0x1F48ECu);
    ctx->pc = 0x1F48E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F48E4u;
    // 0x1f48e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F48E4u, 0x1F48ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48ECu;
label_1f48ec:
    // 0x1f48ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f48ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f48f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f48f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f48f4: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F48F4u;
    SET_GPR_U32(ctx, 31, 0x1F48FCu);
    ctx->pc = 0x1F48F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F48F4u;
    // 0x1f48f8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F48F4u, 0x1F48FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48FCu;
label_1f48fc:
    // 0x1f48fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f48fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4900: 0xc07d51e  jal         func_1F5478
    ctx->pc = 0x1F4900u;
    SET_GPR_U32(ctx, 31, 0x1F4908u);
    ctx->pc = 0x1F4904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4900u;
    // 0x1f4904: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5478u, 0x1F4900u, 0x1F4908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4908u;
label_1f4908:
    // 0x1f4908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f490c: 0xc07d24a  jal         func_1F4928
    ctx->pc = 0x1F490Cu;
    SET_GPR_U32(ctx, 31, 0x1F4914u);
    ctx->pc = 0x1F4910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F490Cu;
    // 0x1f4910: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4928u, 0x1F490Cu, 0x1F4914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4914u;
label_1f4914:
    // 0x1f4914: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f4914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f491c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F491Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F491Cu;
        // 0x1f4920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F491Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4924u;
    // 0x1f4924: 0x0  nop
    ctx->pc = 0x1f4924u;
    // NOP
    ctx->pc = 0x1f4928u;
}
