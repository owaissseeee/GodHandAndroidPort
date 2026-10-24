#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r304_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r304
{
// Function: func_0079A808
// Address: 0x79a808 - 0x79a8f0
void func_0079A808_0x79a808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A808_0x79a808");
#endif

    switch (ctx->pc) {
        case 0x79a82cu: goto label_79a82c;
        case 0x79a850u: goto label_79a850;
        case 0x79a858u: goto label_79a858;
        case 0x79a864u: goto label_79a864;
        case 0x79a870u: goto label_79a870;
        case 0x79a894u: goto label_79a894;
        case 0x79a8b0u: goto label_79a8b0;
        case 0x79a8c4u: goto label_79a8c4;
        case 0x79a8d0u: goto label_79a8d0;
        case 0x79a8dcu: goto label_79a8dc;
        default: break;
    }

    ctx->pc = 0x79a808u;

    // 0x79a808: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79a808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79a80c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x79a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x79a810: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79a810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79a814: 0x24509b70  addiu       $s0, $v0, -0x6490
    ctx->pc = 0x79a814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x79a818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79a818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79a81c: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79a81cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79a820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a824: 0xc07ea80  jal         func_1FAA00
    ctx->pc = 0x79A824u;
    SET_GPR_U32(ctx, 31, 0x79A82Cu);
    ctx->pc = 0x79A828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A824u;
    // 0x79a828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA00u, 0x79A824u, 0x79A82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A82Cu;
label_79a82c:
    // 0x79a82c: 0x5c40000e  bgtzl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A82Cu;
    {
        const bool branch_taken_0x79a82c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x79a82c) {
            ctx->pc = 0x79A830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A82Cu;
            // 0x79a830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A868u;
            goto label_79a868;
        }
    }
    ctx->pc = 0x79A834u;
    // 0x79a834: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79a834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a838: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x79a838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x79a83c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a83cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a840: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a844: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a844u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a848: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79A848u;
    SET_GPR_U32(ctx, 31, 0x79A850u);
    ctx->pc = 0x79A84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A848u;
    // 0x79a84c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79A848u, 0x79A850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A850u;
label_79a850:
    // 0x79a850: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A850u;
    SET_GPR_U32(ctx, 31, 0x79A858u);
    ctx->pc = 0x79A854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A850u;
    // 0x79a854: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A850u, 0x79A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A858u;
label_79a858:
    // 0x79a858: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79a858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a85c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A85Cu;
    SET_GPR_U32(ctx, 31, 0x79A864u);
    ctx->pc = 0x79A860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A85Cu;
    // 0x79a860: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A85Cu, 0x79A864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A864u;
label_79a864:
    // 0x79a864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a868:
    // 0x79a868: 0xc07ea6e  jal         func_1FA9B8
    ctx->pc = 0x79A868u;
    SET_GPR_U32(ctx, 31, 0x79A870u);
    ctx->pc = 0x79A86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A868u;
    // 0x79a86c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA9B8u, 0x79A868u, 0x79A870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A870u;
label_79a870:
    // 0x79a870: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a874: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a874u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a878: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a87c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a880: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x79a880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79a884: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a888: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a88c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A88Cu;
    SET_GPR_U32(ctx, 31, 0x79A894u);
    ctx->pc = 0x79A890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A88Cu;
    // 0x79a890: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A88Cu, 0x79A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A894u;
label_79a894:
    // 0x79a894: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79a894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a898: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a89c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a89cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a8a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8a4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x79a8a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a8a8: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79A8A8u;
    SET_GPR_U32(ctx, 31, 0x79A8B0u);
    ctx->pc = 0x79A8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8A8u;
    // 0x79a8ac: 0x24051001  addiu       $a1, $zero, 0x1001 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79A8A8u, 0x79A8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8B0u;
label_79a8b0:
    // 0x79a8b0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79a8b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79a8b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a8b8: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x79a8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x79a8bc: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x79A8BCu;
    SET_GPR_U32(ctx, 31, 0x79A8C4u);
    ctx->pc = 0x79A8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8BCu;
    // 0x79a8c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x79A8BCu, 0x79A8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8C4u;
label_79a8c4:
    // 0x79a8c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8c8: 0xc0b0a02  jal         func_2C2808
    ctx->pc = 0x79A8C8u;
    SET_GPR_U32(ctx, 31, 0x79A8D0u);
    ctx->pc = 0x79A8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8C8u;
    // 0x79a8cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2808u, 0x79A8C8u, 0x79A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8D0u;
label_79a8d0:
    // 0x79a8d0: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a8d4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A8D4u;
    SET_GPR_U32(ctx, 31, 0x79A8DCu);
    ctx->pc = 0x79A8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8D4u;
    // 0x79a8d8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A8D4u, 0x79A8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8DCu;
label_79a8dc:
    // 0x79a8dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79a8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a8e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79a8e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a8e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8E8u;
        // 0x79a8ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A8F0u;
}
} // namespace gh_r304
