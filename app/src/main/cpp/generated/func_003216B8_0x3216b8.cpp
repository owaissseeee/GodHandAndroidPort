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

// Function: func_003216B8
// Address: 0x3216b8 - 0x321738
void func_003216B8_0x3216b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003216B8_0x3216b8");
#endif

    switch (ctx->pc) {
        case 0x3216b8u: goto label_3216b8;
        case 0x3216bcu: goto label_3216bc;
        case 0x3216c0u: goto label_3216c0;
        case 0x3216c4u: goto label_3216c4;
        case 0x3216c8u: goto label_3216c8;
        case 0x3216ccu: goto label_3216cc;
        case 0x3216d0u: goto label_3216d0;
        case 0x3216d4u: goto label_3216d4;
        case 0x3216d8u: goto label_3216d8;
        case 0x3216dcu: goto label_3216dc;
        case 0x3216e0u: goto label_3216e0;
        case 0x3216e4u: goto label_3216e4;
        case 0x3216e8u: goto label_3216e8;
        case 0x3216ecu: goto label_3216ec;
        case 0x3216f0u: goto label_3216f0;
        case 0x3216f4u: goto label_3216f4;
        case 0x3216f8u: goto label_3216f8;
        case 0x3216fcu: goto label_3216fc;
        case 0x321700u: goto label_321700;
        case 0x321704u: goto label_321704;
        case 0x321708u: goto label_321708;
        case 0x32170cu: goto label_32170c;
        case 0x321710u: goto label_321710;
        case 0x321714u: goto label_321714;
        case 0x321718u: goto label_321718;
        case 0x32171cu: goto label_32171c;
        case 0x321720u: goto label_321720;
        case 0x321724u: goto label_321724;
        case 0x321728u: goto label_321728;
        case 0x32172cu: goto label_32172c;
        case 0x321730u: goto label_321730;
        case 0x321734u: goto label_321734;
        default: break;
    }

    ctx->pc = 0x3216b8u;

label_3216b8:
    // 0x3216b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3216b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3216bc:
    // 0x3216bc: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x3216bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_3216c0:
    // 0x3216c0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3216c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_3216c4:
    // 0x3216c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3216c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3216c8:
    // 0x3216c8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3216c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_3216cc:
    // 0x3216cc: 0x24511020  addiu       $s1, $v0, 0x1020
    ctx->pc = 0x3216ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4128));
label_3216d0:
    // 0x3216d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3216d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3216d4:
    // 0x3216d4: 0x3c120045  lui         $s2, 0x45
    ctx->pc = 0x3216d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)69 << 16));
label_3216d8:
    // 0x3216d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3216d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_3216dc:
    // 0x3216dc: 0xc0c84b0  jal         func_3212C0
label_3216e0:
    if (ctx->pc == 0x3216E0u) {
        ctx->pc = 0x3216E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3216DCu;
        // 0x3216e0: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3216E4u;
        goto label_3216e4;
    }
    ctx->pc = 0x3216DCu;
    SET_GPR_U32(ctx, 31, 0x3216E4u);
    ctx->pc = 0x3216E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3216DCu;
    // 0x3216e0: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3212C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3212C0u, 0x3216DCu, 0x3216E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3216E4u;
label_3216e4:
    // 0x3216e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3216e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3216e8:
    // 0x3216e8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3216ec:
    if (ctx->pc == 0x3216ECu) {
        ctx->pc = 0x3216ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3216E8u;
        // 0x3216ec: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3216F0u;
        goto label_3216f0;
    }
    ctx->pc = 0x3216E8u;
    {
        const bool branch_taken_0x3216e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3216ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3216E8u;
        // 0x3216ec: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3216e8) {
            ctx->pc = 0x3216F8u;
            goto label_3216f8;
        }
    }
    ctx->pc = 0x3216F0u;
label_3216f0:
    // 0x3216f0: 0xc0c8386  jal         func_320E18
label_3216f4:
    if (ctx->pc == 0x3216F4u) {
        ctx->pc = 0x3216F8u;
        goto label_3216f8;
    }
    ctx->pc = 0x3216F0u;
    SET_GPR_U32(ctx, 31, 0x3216F8u);
    ctx->pc = 0x320E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320E18u, 0x3216F0u, 0x3216F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3216F8u;
label_3216f8:
    // 0x3216f8: 0x26421288  addiu       $v0, $s2, 0x1288
    ctx->pc = 0x3216f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4744));
label_3216fc:
    // 0x3216fc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3216fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_321700:
    // 0x321700: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x321700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_321704:
    // 0x321704: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x321704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_321708:
    // 0x321708: 0x40f809  jalr        $v0
label_32170c:
    if (ctx->pc == 0x32170Cu) {
        ctx->pc = 0x321710u;
        goto label_321710;
    }
    ctx->pc = 0x321708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321710u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321708u, 0x321710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321710u;
label_321710:
    // 0x321710: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x321710u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
label_321714:
    // 0x321714: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x321714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321718:
    // 0x321718: 0x24c6f3c8  addiu       $a2, $a2, -0xC38
    ctx->pc = 0x321718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964168));
label_32171c:
    // 0x32171c: 0xc0c84de  jal         func_321378
label_321720:
    if (ctx->pc == 0x321720u) {
        ctx->pc = 0x321720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32171Cu;
        // 0x321720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321724u;
        goto label_321724;
    }
    ctx->pc = 0x32171Cu;
    SET_GPR_U32(ctx, 31, 0x321724u);
    ctx->pc = 0x321720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32171Cu;
    // 0x321720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321378u, 0x32171Cu, 0x321724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321724u;
label_321724:
    // 0x321724: 0xc0c8386  jal         func_320E18
label_321728:
    if (ctx->pc == 0x321728u) {
        ctx->pc = 0x32172Cu;
        goto label_32172c;
    }
    ctx->pc = 0x321724u;
    SET_GPR_U32(ctx, 31, 0x32172Cu);
    ctx->pc = 0x320E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320E18u, 0x321724u, 0x32172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32172Cu;
label_32172c:
    // 0x32172c: 0x26421288  addiu       $v0, $s2, 0x1288
    ctx->pc = 0x32172cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4744));
label_321730:
    // 0x321730: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_321734:
    if (ctx->pc == 0x321734u) {
        ctx->pc = 0x321734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321730u;
        // 0x321734: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321738u;
        goto label_fallthrough_0x321730;
    }
    ctx->pc = 0x321730u;
    {
        const bool branch_taken_0x321730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321730u;
        // 0x321734: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321730) {
            ctx->pc = 0x3216F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3216f0;
        }
    }
label_fallthrough_0x321730:
    ctx->pc = 0x321738u;
}
