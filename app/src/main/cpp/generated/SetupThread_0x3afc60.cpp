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

// Function: SetupThread
// Address: 0x3afc60 - 0x3afc70
void SetupThread_0x3afc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetupThread_0x3afc60");
#endif

    switch (ctx->pc) {
        case 0x3afc68u: goto label_3afc68;
        default: break;
    }

    ctx->pc = 0x3afc60u;

    // 0x3afc60: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3afc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3afc64: 0xc  syscall     0
    ctx->pc = 0x3afc64u;
    ctx->pc = 0x3AFC68u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3afc68:
    // 0x3afc68: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFC70u;
}
