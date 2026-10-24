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

// Function: ResumeIntrDispatch
// Address: 0x3af8d0 - 0x3af8e0
void ResumeIntrDispatch_0x3af8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResumeIntrDispatch_0x3af8d0");
#endif

    switch (ctx->pc) {
        case 0x3af8d8u: goto label_3af8d8;
        default: break;
    }

    ctx->pc = 0x3af8d0u;

    // 0x3af8d0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3af8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3af8d4: 0xc  syscall     0
    ctx->pc = 0x3af8d4u;
    ctx->pc = 0x3AF8D8u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3af8d8:
    // 0x3af8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF8E0u;
}
