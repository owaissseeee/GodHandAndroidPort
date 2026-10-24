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

// Function: AddSbusIntcHandler
// Address: 0x3af920 - 0x3af930
void AddSbusIntcHandler_0x3af920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddSbusIntcHandler_0x3af920");
#endif

    switch (ctx->pc) {
        case 0x3af928u: goto label_3af928;
        default: break;
    }

    ctx->pc = 0x3af920u;

    // 0x3af920: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3af920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3af924: 0xc  syscall     0
    ctx->pc = 0x3af924u;
    ctx->pc = 0x3AF928u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3af928:
    // 0x3af928: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF930u;
}
