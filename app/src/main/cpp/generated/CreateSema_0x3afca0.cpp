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

// Function: CreateSema
// Address: 0x3afca0 - 0x3afcb0
void CreateSema_0x3afca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateSema_0x3afca0");
#endif

    switch (ctx->pc) {
        case 0x3afca8u: goto label_3afca8;
        default: break;
    }

    ctx->pc = 0x3afca0u;

    // 0x3afca0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3afca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3afca4: 0xc  syscall     0
    ctx->pc = 0x3afca4u;
    ctx->pc = 0x3AFCA8u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3afca8:
    // 0x3afca8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFCB0u;
}
