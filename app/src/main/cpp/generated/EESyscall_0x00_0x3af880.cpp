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

// Function: EESyscall_0x00
// Address: 0x3af880 - 0x3af890
void EESyscall_0x00_0x3af880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EESyscall_0x00_0x3af880");
#endif

    switch (ctx->pc) {
        case 0x3af888u: goto label_3af888;
        default: break;
    }

    ctx->pc = 0x3af880u;

    // 0x3af880: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x3af880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x3af884: 0xc  syscall     0
    ctx->pc = 0x3af884u;
    ctx->pc = 0x3AF888u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3af888:
    // 0x3af888: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF890u;
}
