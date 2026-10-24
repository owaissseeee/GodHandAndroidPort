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

// Function: AddIntcHandler
// Address: 0x3af980 - 0x3af990
void AddIntcHandler_0x3af980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddIntcHandler_0x3af980");
#endif

    switch (ctx->pc) {
        case 0x3af988u: goto label_3af988;
        default: break;
    }

    ctx->pc = 0x3af980u;

    // 0x3af980: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3af980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3af984: 0xc  syscall     0
    ctx->pc = 0x3af984u;
    ctx->pc = 0x3AF988u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3af988:
    // 0x3af988: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF990u;
}
