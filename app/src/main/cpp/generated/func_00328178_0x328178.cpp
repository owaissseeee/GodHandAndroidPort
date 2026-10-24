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

// Function: func_00328178
// Address: 0x328178 - 0x328190
void func_00328178_0x328178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328178_0x328178");
#endif

    ctx->pc = 0x328178u;

    // 0x328178: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x328178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32817c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x32817Cu;
    {
        const bool branch_taken_0x32817c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x328180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32817Cu;
        // 0x328180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32817c) {
            ctx->pc = 0x328188u;
            goto label_328188;
        }
    }
    ctx->pc = 0x328184u;
    // 0x328184: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x328184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_328188:
    // 0x328188: 0x3e00008  jr          $ra
    ctx->pc = 0x328188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328190u;
}
