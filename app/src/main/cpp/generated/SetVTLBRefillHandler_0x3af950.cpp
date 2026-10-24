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

// Function: SetVTLBRefillHandler
// Address: 0x3af950 - 0x3af960
void SetVTLBRefillHandler_0x3af950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetVTLBRefillHandler_0x3af950");
#endif

    switch (ctx->pc) {
        case 0x3af958u: goto label_3af958;
        default: break;
    }

    ctx->pc = 0x3af950u;

    // 0x3af950: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x3af950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3af954: 0xc  syscall     0
    ctx->pc = 0x3af954u;
    ctx->pc = 0x3AF958u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3af958:
    // 0x3af958: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF960u;
}
