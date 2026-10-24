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

// Function: IsAnyActorActive_289418
// Address: 0x289418 - 0x289480
void IsAnyActorActive_289418_0x289418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsAnyActorActive_289418_0x289418");
#endif

    switch (ctx->pc) {
        case 0x289438u: goto label_289438;
        case 0x289440u: goto label_289440;
        case 0x289450u: goto label_289450;
        default: break;
    }

    ctx->pc = 0x289418u;

    // 0x289418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x289418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28941c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28941cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x289420: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x289420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x289424: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x289424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x289428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28942c: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x28942cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x289430: 0x262464f0  addiu       $a0, $s1, 0x64F0
    ctx->pc = 0x289430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 25840));
    // 0x289434: 0x0  nop
    ctx->pc = 0x289434u;
    // NOP
label_289438:
    // 0x289438: 0xc0a5232  jal         func_2948C8
    ctx->pc = 0x289438u;
    SET_GPR_U32(ctx, 31, 0x289440u);
    ctx->pc = 0x28943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289438u;
    // 0x28943c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2948C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2948C8u, 0x289438u, 0x289440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289440u;
label_289440:
    // 0x289440: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x289440u;
    {
        const bool branch_taken_0x289440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x289440) {
            ctx->pc = 0x289444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289440u;
            // 0x289444: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28945Cu;
            goto label_28945c;
        }
    }
    ctx->pc = 0x289448u;
    // 0x289448: 0xc06e190  jal         func_1B8640
    ctx->pc = 0x289448u;
    SET_GPR_U32(ctx, 31, 0x289450u);
    ctx->pc = 0x28944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289448u;
    // 0x28944c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8640u, 0x289448u, 0x289450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289450u;
label_289450:
    // 0x289450: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x289450u;
    {
        const bool branch_taken_0x289450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289450u;
        // 0x289454: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289450) {
            ctx->pc = 0x28946Cu;
            goto label_28946c;
        }
    }
    ctx->pc = 0x289458u;
    // 0x289458: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x289458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28945c:
    // 0x28945c: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x28945cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x289460: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x289460u;
    {
        const bool branch_taken_0x289460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289460u;
        // 0x289464: 0x262464f0  addiu       $a0, $s1, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289460) {
            ctx->pc = 0x289438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289438;
        }
    }
    ctx->pc = 0x289468u;
    // 0x289468: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x289468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28946c:
    // 0x28946c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28946cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x289470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x289474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289478: 0x3e00008  jr          $ra
    ctx->pc = 0x289478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289478u;
        // 0x28947c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289480u;
}
