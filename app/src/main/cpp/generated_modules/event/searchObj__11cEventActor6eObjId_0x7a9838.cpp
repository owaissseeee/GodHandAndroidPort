#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: searchObj__11cEventActor6eObjId
// Address: 0x7a9838 - 0x7a9880
void searchObj__11cEventActor6eObjId_0x7a9838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("searchObj__11cEventActor6eObjId_0x7a9838");
#endif

    switch (ctx->pc) {
        case 0x7a9858u: goto label_7a9858;
        default: break;
    }

    ctx->pc = 0x7a9838u;

    // 0x7a9838: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x7a9838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x7a983c: 0x8c624c30  lw          $v0, 0x4C30($v1)
    ctx->pc = 0x7a983cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x754C30u));
    // 0x7a9840: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x7a9840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x7a9844: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7a9844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7a9848: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x7A9848u;
    {
        const bool branch_taken_0x7a9848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x7A984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9848u;
        // 0x7a984c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9848) {
            ctx->pc = 0x7A9874u;
            goto label_7a9874;
        }
    }
    ctx->pc = 0x7A9850u;
    // 0x7a9850: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7a9850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7a9854: 0x0  nop
    ctx->pc = 0x7a9854u;
    // NOP
label_7a9858:
    // 0x7a9858: 0x948202fe  lhu         $v0, 0x2FE($a0)
    ctx->pc = 0x7a9858u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x7a985c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7A985Cu;
    {
        const bool branch_taken_0x7a985c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x7A9860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A985Cu;
        // 0x7a9860: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a985c) {
            ctx->pc = 0x7A986Cu;
            goto label_7a986c;
        }
    }
    ctx->pc = 0x7A9864u;
    // 0x7a9864: 0x3e00008  jr          $ra
    ctx->pc = 0x7A9864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A9868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9864u;
        // 0x7a9868: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A9864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A986Cu;
label_7a986c:
    // 0x7a986c: 0x5466fffa  bnel        $v1, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7A986Cu;
    {
        const bool branch_taken_0x7a986c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x7a986c) {
            ctx->pc = 0x7A9870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A986Cu;
            // 0x7a9870: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A9858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7a9858;
        }
    }
    ctx->pc = 0x7A9874u;
label_7a9874:
    // 0x7a9874: 0x3e00008  jr          $ra
    ctx->pc = 0x7A9874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A9878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9874u;
        // 0x7a9878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A9874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A987Cu;
    // 0x7a987c: 0x0  nop
    ctx->pc = 0x7a987cu;
    // NOP
    ctx->pc = 0x7a9880u;
}
} // namespace gh_event
