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

// Function: func_003B6678
// Address: 0x3b6678 - 0x3b6688
void func_003B6678_0x3b6678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B6678_0x3b6678");
#endif

    switch (ctx->pc) {
        case 0x3b6680u: goto label_3b6680;
        default: break;
    }

    ctx->pc = 0x3b6678u;

    // 0x3b6678: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x3b6678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x3b667c: 0xc  syscall     0
    ctx->pc = 0x3b667cu;
    ctx->pc = 0x3B6680u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3b6680:
    // 0x3b6680: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6688u;
}
