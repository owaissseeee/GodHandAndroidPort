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

// Function: Obj35D0_GetStringPtr_D00459BF0
// Address: 0x35d520 - 0x35d538
void Obj35D0_GetStringPtr_D00459BF0_0x35d520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj35D0_GetStringPtr_D00459BF0_0x35d520");
#endif

    ctx->pc = 0x35d520u;

    // 0x35d520: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x35d520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x35d524: 0x3e00008  jr          $ra
    ctx->pc = 0x35D524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D524u;
        // 0x35d528: 0x24429bf0  addiu       $v0, $v0, -0x6410 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941680));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D52Cu;
    // 0x35d52c: 0x0  nop
    ctx->pc = 0x35d52cu;
    // NOP
    // 0x35d530: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x35d530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x35d534: 0x0  nop
    ctx->pc = 0x35d534u;
    // NOP
    ctx->pc = 0x35d538u;
}
