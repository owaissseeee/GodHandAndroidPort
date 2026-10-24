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

// Function: iEnableDmac
// Address: 0x3afa60 - 0x3afa70
void iEnableDmac_0x3afa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iEnableDmac_0x3afa60");
#endif

    switch (ctx->pc) {
        case 0x3afa68u: goto label_3afa68;
        default: break;
    }

    ctx->pc = 0x3afa60u;

    // 0x3afa60: 0x2403ffe4  addiu       $v1, $zero, -0x1C
    ctx->pc = 0x3afa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
    // 0x3afa64: 0xc  syscall     0
    ctx->pc = 0x3afa64u;
    ctx->pc = 0x3AFA68u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3afa68:
    // 0x3afa68: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFA70u;
}
