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

// Function: iReleaseWaitThread
// Address: 0x3afb80 - 0x3afb90
void iReleaseWaitThread_0x3afb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iReleaseWaitThread_0x3afb80");
#endif

    switch (ctx->pc) {
        case 0x3afb88u: goto label_3afb88;
        default: break;
    }

    ctx->pc = 0x3afb80u;

    // 0x3afb80: 0x2403ffd2  addiu       $v1, $zero, -0x2E
    ctx->pc = 0x3afb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967250));
    // 0x3afb84: 0xc  syscall     0
    ctx->pc = 0x3afb84u;
    ctx->pc = 0x3AFB88u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3afb88:
    // 0x3afb88: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFB90u;
}
