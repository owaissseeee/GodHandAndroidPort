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

// Function: func_003951B0
// Address: 0x3951b0 - 0x3951c0
void func_003951B0_0x3951b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003951B0_0x3951b0");
#endif

    ctx->pc = 0x3951b0u;

    // 0x3951b0: 0x0  nop
    ctx->pc = 0x3951b0u;
    // NOP
    // 0x3951b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3951B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3951B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3951BCu;
    // 0x3951bc: 0x0  nop
    ctx->pc = 0x3951bcu;
    // NOP
    ctx->pc = 0x3951c0u;
}
