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

// Function: GetMemorySize
// Address: 0x3b0100 - 0x3b0110
void GetMemorySize_0x3b0100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMemorySize_0x3b0100");
#endif

    switch (ctx->pc) {
        case 0x3b0108u: goto label_3b0108;
        default: break;
    }

    ctx->pc = 0x3b0100u;

    // 0x3b0100: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x3b0100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x3b0104: 0xc  syscall     0
    ctx->pc = 0x3b0104u;
    ctx->pc = 0x3B0108u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3b0108:
    // 0x3b0108: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0110u;
}
