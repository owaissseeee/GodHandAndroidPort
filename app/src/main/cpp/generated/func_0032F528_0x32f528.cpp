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

// Function: func_0032F528
// Address: 0x32f528 - 0x32f538
void func_0032F528_0x32f528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032F528_0x32f528");
#endif

    ctx->pc = 0x32f528u;

    // 0x32f528: 0x3e00008  jr          $ra
    ctx->pc = 0x32F528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F528u;
        // 0x32f52c: 0x8c821934  lw          $v0, 0x1934($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6452)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F530u;
    // 0x32f530: 0x0  nop
    ctx->pc = 0x32f530u;
    // NOP
    // 0x32f534: 0x0  nop
    ctx->pc = 0x32f534u;
    // NOP
    ctx->pc = 0x32f538u;
}
