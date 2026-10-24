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

// Function: DigitDisplay_setNumber
// Address: 0x1f33f8 - 0x1f3488
void DigitDisplay_setNumber_0x1f33f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DigitDisplay_setNumber_0x1f33f8");
#endif

    switch (ctx->pc) {
        case 0x1f3424u: goto label_1f3424;
        case 0x1f3434u: goto label_1f3434;
        case 0x1f3444u: goto label_1f3444;
        case 0x1f3454u: goto label_1f3454;
        case 0x1f3464u: goto label_1f3464;
        case 0x1f3470u: goto label_1f3470;
        default: break;
    }

    ctx->pc = 0x1f33f8u;

    // 0x1f33f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f33f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f33fc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f33fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f3400: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f3400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f3404: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f3404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3408: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f3408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f340c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f340cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3410: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f3410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f3418: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f3418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f341c: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F341Cu;
    SET_GPR_U32(ctx, 31, 0x1F3424u);
    ctx->pc = 0x1F3420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F341Cu;
    // 0x1f3420: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F341Cu, 0x1F3424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3424u;
label_1f3424:
    // 0x1f3424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3428: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f3428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f342c: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F342Cu;
    SET_GPR_U32(ctx, 31, 0x1F3434u);
    ctx->pc = 0x1F3430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F342Cu;
    // 0x1f3430: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F342Cu, 0x1F3434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3434u;
label_1f3434:
    // 0x1f3434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3438: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f3438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f343c: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F343Cu;
    SET_GPR_U32(ctx, 31, 0x1F3444u);
    ctx->pc = 0x1F3440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F343Cu;
    // 0x1f3440: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F343Cu, 0x1F3444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3444u;
label_1f3444:
    // 0x1f3444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3448: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f3448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f344c: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F344Cu;
    SET_GPR_U32(ctx, 31, 0x1F3454u);
    ctx->pc = 0x1F3450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F344Cu;
    // 0x1f3450: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F344Cu, 0x1F3454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3454u;
label_1f3454:
    // 0x1f3454: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f3454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f345c: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F345Cu;
    SET_GPR_U32(ctx, 31, 0x1F3464u);
    ctx->pc = 0x1F3460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F345Cu;
    // 0x1f3460: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F345Cu, 0x1F3464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3464u;
label_1f3464:
    // 0x1f3464: 0x26040728  addiu       $a0, $s0, 0x728
    ctx->pc = 0x1f3464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1832));
    // 0x1f3468: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1F3468u;
    SET_GPR_U32(ctx, 31, 0x1F3470u);
    ctx->pc = 0x1F346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3468u;
    // 0x1f346c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1F3468u, 0x1F3470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3470u;
label_1f3470:
    // 0x1f3470: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f3470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3474: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f3474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3478: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f3478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f347c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f347cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3480: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3480u;
        // 0x1f3484: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3488u;
}
