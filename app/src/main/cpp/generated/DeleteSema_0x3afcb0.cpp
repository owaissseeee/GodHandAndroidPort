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

// Function: DeleteSema
// Address: 0x3afcb0 - 0x3afcc0
void DeleteSema_0x3afcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteSema_0x3afcb0");
#endif

    switch (ctx->pc) {
        case 0x3afcb8u: goto label_3afcb8;
        default: break;
    }

    ctx->pc = 0x3afcb0u;

    // 0x3afcb0: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x3afcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x3afcb4: 0xc  syscall     0
    ctx->pc = 0x3afcb4u;
    ctx->pc = 0x3AFCB8u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3afcb8:
    // 0x3afcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFCC0u;
}
