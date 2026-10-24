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

// Function: Obj35D0_ClearFields_0_4_8_C_D728
// Address: 0x35d728 - 0x35d740
void Obj35D0_ClearFields_0_4_8_C_D728_0x35d728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj35D0_ClearFields_0_4_8_C_D728_0x35d728");
#endif

    ctx->pc = 0x35d728u;

    // 0x35d728: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x35d728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x35d72c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x35d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x35d730: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x35d730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x35d734: 0x3e00008  jr          $ra
    ctx->pc = 0x35D734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D734u;
        // 0x35d738: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D73Cu;
    // 0x35d73c: 0x0  nop
    ctx->pc = 0x35d73cu;
    // NOP
    ctx->pc = 0x35d740u;
}
