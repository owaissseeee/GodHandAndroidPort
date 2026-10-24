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

// Function: func_003B68A8
// Address: 0x3b68a8 - 0x3b68b8
void func_003B68A8_0x3b68a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B68A8_0x3b68a8");
#endif

    switch (ctx->pc) {
        case 0x3b68b0u: goto label_3b68b0;
        default: break;
    }

    ctx->pc = 0x3b68a8u;

    // 0x3b68a8: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x3b68a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x3b68ac: 0xc  syscall     0
    ctx->pc = 0x3b68acu;
    ctx->pc = 0x3B68B0u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3b68b0:
    // 0x3b68b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B68B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B68B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B68B8u;
}
