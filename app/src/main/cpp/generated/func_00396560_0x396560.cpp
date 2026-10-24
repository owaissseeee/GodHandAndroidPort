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

// Function: func_00396560
// Address: 0x396560 - 0x396570
void func_00396560_0x396560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00396560_0x396560");
#endif

    switch (ctx->pc) {
        case 0x396568u: goto label_396568;
        default: break;
    }

    ctx->pc = 0x396560u;

    // 0x396560: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x396560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x396564: 0xc  syscall     0
    ctx->pc = 0x396564u;
    ctx->pc = 0x396568u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_396568:
    // 0x396568: 0x3e00008  jr          $ra
    ctx->pc = 0x396568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396570u;
}
