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

// Function: CreateEventFlag
// Address: 0x3afda0 - 0x3afdb0
void CreateEventFlag_0x3afda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateEventFlag_0x3afda0");
#endif

    switch (ctx->pc) {
        case 0x3afda8u: goto label_3afda8;
        default: break;
    }

    ctx->pc = 0x3afda0u;

    // 0x3afda0: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x3afda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3afda4: 0xc  syscall     0
    ctx->pc = 0x3afda4u;
    ctx->pc = 0x3AFDA8u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3afda8:
    // 0x3afda8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFDB0u;
}
