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

// Function: func_0035BA48
// Address: 0x35ba48 - 0x35ba50
void func_0035BA48_0x35ba48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035BA48_0x35ba48");
#endif

    ctx->pc = 0x35ba48u;

    // 0x35ba48: 0x3e00008  jr          $ra
    ctx->pc = 0x35BA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BA48u;
        // 0x35ba4c: 0xac850fdc  sw          $a1, 0xFDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4060), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BA50u;
}
