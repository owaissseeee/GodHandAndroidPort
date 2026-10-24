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

// Function: cCoreSave_getContinueNum
// Address: 0x1fbf48 - 0x1fbf60
void cCoreSave_getContinueNum_0x1fbf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getContinueNum_0x1fbf48");
#endif

    ctx->pc = 0x1fbf48u;

    // 0x1fbf48: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fbf48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fbf4c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FBF4Cu;
    {
        const bool branch_taken_0x1fbf4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF4Cu;
        // 0x1fbf50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf4c) {
            ctx->pc = 0x1FBF58u;
            goto label_1fbf58;
        }
    }
    ctx->pc = 0x1FBF54u;
    // 0x1fbf54: 0x94820012  lhu         $v0, 0x12($a0)
    ctx->pc = 0x1fbf54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
label_1fbf58:
    // 0x1fbf58: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBF60u;
}
