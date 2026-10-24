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

// Function: func_002AED40
// Address: 0x2aed40 - 0x2aed70
void func_002AED40_0x2aed40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AED40_0x2aed40");
#endif

    switch (ctx->pc) {
        case 0x2aed50u: goto label_2aed50;
        default: break;
    }

    ctx->pc = 0x2aed40u;

    // 0x2aed40: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2aed40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2aed44: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AED44u;
    {
        const bool branch_taken_0x2aed44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED44u;
        // 0x2aed48: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed44) {
            ctx->pc = 0x2AED68u;
            goto label_2aed68;
        }
    }
    ctx->pc = 0x2AED4Cu;
    // 0x2aed4c: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x2aed4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_2aed50:
    // 0x2aed50: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AED50u;
    {
        const bool branch_taken_0x2aed50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2aed50) {
            ctx->pc = 0x2AED54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AED50u;
            // 0x2aed54: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AED60u;
            goto label_2aed60;
        }
    }
    ctx->pc = 0x2AED58u;
    // 0x2aed58: 0x3e00008  jr          $ra
    ctx->pc = 0x2AED58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED58u;
        // 0x2aed5c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AED58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AED60u;
label_2aed60:
    // 0x2aed60: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AED60u;
    {
        const bool branch_taken_0x2aed60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aed60) {
            ctx->pc = 0x2AED64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AED60u;
            // 0x2aed64: 0x94620064  lhu         $v0, 0x64($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AED50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aed50;
        }
    }
    ctx->pc = 0x2AED68u;
label_2aed68:
    // 0x2aed68: 0x3e00008  jr          $ra
    ctx->pc = 0x2AED68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED68u;
        // 0x2aed6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AED68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AED70u;
}
