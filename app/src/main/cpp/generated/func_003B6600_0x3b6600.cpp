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

// Function: func_003B6600
// Address: 0x3b6600 - 0x3b6610
void func_003B6600_0x3b6600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B6600_0x3b6600");
#endif

    switch (ctx->pc) {
        case 0x3b6608u: goto label_3b6608;
        default: break;
    }

    ctx->pc = 0x3b6600u;

    // 0x3b6600: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x3b6600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x3b6604: 0xc  syscall     0
    ctx->pc = 0x3b6604u;
    ctx->pc = 0x3B6608u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3b6608:
    // 0x3b6608: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6610u;
}
