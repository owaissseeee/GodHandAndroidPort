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

// Function: GetThreadId
// Address: 0x3afb90 - 0x3afba0
void GetThreadId_0x3afb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetThreadId_0x3afb90");
#endif

    switch (ctx->pc) {
        case 0x3afb98u: goto label_3afb98;
        default: break;
    }

    ctx->pc = 0x3afb90u;

    // 0x3afb90: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x3afb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x3afb94: 0xc  syscall     0
    ctx->pc = 0x3afb94u;
    ctx->pc = 0x3AFB98u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3afb98:
    // 0x3afb98: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFBA0u;
}
