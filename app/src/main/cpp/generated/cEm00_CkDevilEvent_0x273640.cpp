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

// Function: cEm00_CkDevilEvent
// Address: 0x273640 - 0x273678
void cEm00_CkDevilEvent_0x273640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_CkDevilEvent_0x273640");
#endif

    ctx->pc = 0x273640u;

    // 0x273640: 0x908202f4  lbu         $v0, 0x2F4($a0)
    ctx->pc = 0x273640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 756)));
    // 0x273644: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x273644u;
    {
        const bool branch_taken_0x273644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273644) {
            ctx->pc = 0x273648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273644u;
            // 0x273648: 0x908302f5  lbu         $v1, 0x2F5($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273654u;
            goto label_273654;
        }
    }
    ctx->pc = 0x27364Cu;
    // 0x27364c: 0x3e00008  jr          $ra
    ctx->pc = 0x27364Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27364Cu;
        // 0x273650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27364Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273654u;
label_273654:
    // 0x273654: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x273654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x273658: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x273658u;
    {
        const bool branch_taken_0x273658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x273658) {
            ctx->pc = 0x273670u;
            goto label_273670;
        }
    }
    ctx->pc = 0x273660u;
    // 0x273660: 0x908202f6  lbu         $v0, 0x2F6($a0)
    ctx->pc = 0x273660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 758)));
    // 0x273664: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x273664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x273668: 0x3e00008  jr          $ra
    ctx->pc = 0x273668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273668u;
        // 0x27366c: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273670u;
label_273670:
    // 0x273670: 0x3e00008  jr          $ra
    ctx->pc = 0x273670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273670u;
        // 0x273674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273678u;
}
