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

// Function: EnableIntc
// Address: 0x3af9e0 - 0x3af9f0
void EnableIntc_0x3af9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnableIntc_0x3af9e0");
#endif

    switch (ctx->pc) {
        case 0x3af9e8u: goto label_3af9e8;
        default: break;
    }

    ctx->pc = 0x3af9e0u;

    // 0x3af9e0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3af9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3af9e4: 0xc  syscall     0
    ctx->pc = 0x3af9e4u;
    ctx->pc = 0x3AF9E8u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3af9e8:
    // 0x3af9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF9F0u;
}
