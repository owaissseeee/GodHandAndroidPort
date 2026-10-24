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

// Function: EnableCache
// Address: 0x3afef0 - 0x3aff00
void EnableCache_0x3afef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnableCache_0x3afef0");
#endif

    switch (ctx->pc) {
        case 0x3afef8u: goto label_3afef8;
        default: break;
    }

    ctx->pc = 0x3afef0u;

    // 0x3afef0: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x3afef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x3afef4: 0xc  syscall     0
    ctx->pc = 0x3afef4u;
    ctx->pc = 0x3AFEF8u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3afef8:
    // 0x3afef8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFF00u;
}
