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

// Function: SetVCommonHandler
// Address: 0x3af960 - 0x3af970
void SetVCommonHandler_0x3af960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetVCommonHandler_0x3af960");
#endif

    switch (ctx->pc) {
        case 0x3af968u: goto label_3af968;
        default: break;
    }

    ctx->pc = 0x3af960u;

    // 0x3af960: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3af960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3af964: 0xc  syscall     0
    ctx->pc = 0x3af964u;
    ctx->pc = 0x3AF968u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3af968:
    // 0x3af968: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF970u;
}
