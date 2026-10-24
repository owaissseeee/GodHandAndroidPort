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

// Function: cSnd_FindVoiceByHandle
// Address: 0x2cbf48 - 0x2cbf78
void cSnd_FindVoiceByHandle_0x2cbf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_FindVoiceByHandle_0x2cbf48");
#endif

    switch (ctx->pc) {
        case 0x2cbf58u: goto label_2cbf58;
        default: break;
    }

    ctx->pc = 0x2cbf48u;

    // 0x2cbf48: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2cbf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2cbf4c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CBF4Cu;
    {
        const bool branch_taken_0x2cbf4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbf4c) {
            ctx->pc = 0x2CBF70u;
            goto label_2cbf70;
        }
    }
    ctx->pc = 0x2CBF54u;
    // 0x2cbf54: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2cbf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2cbf58:
    // 0x2cbf58: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CBF58u;
    {
        const bool branch_taken_0x2cbf58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2cbf58) {
            ctx->pc = 0x2CBF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBF58u;
            // 0x2cbf5c: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBF68u;
            goto label_2cbf68;
        }
    }
    ctx->pc = 0x2CBF60u;
    // 0x2cbf60: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF60u;
        // 0x2cbf64: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBF68u;
label_2cbf68:
    // 0x2cbf68: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CBF68u;
    {
        const bool branch_taken_0x2cbf68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbf68) {
            ctx->pc = 0x2CBF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBF68u;
            // 0x2cbf6c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cbf58;
        }
    }
    ctx->pc = 0x2CBF70u;
label_2cbf70:
    // 0x2cbf70: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF70u;
        // 0x2cbf74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBF78u;
}
