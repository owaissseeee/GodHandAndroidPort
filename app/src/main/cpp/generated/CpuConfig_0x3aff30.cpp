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

// Function: CpuConfig
// Address: 0x3aff30 - 0x3aff40
void CpuConfig_0x3aff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CpuConfig_0x3aff30");
#endif

    switch (ctx->pc) {
        case 0x3aff38u: goto label_3aff38;
        default: break;
    }

    ctx->pc = 0x3aff30u;

    // 0x3aff30: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x3aff30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x3aff34: 0xc  syscall     0
    ctx->pc = 0x3aff34u;
    ctx->pc = 0x3AFF38u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3aff38:
    // 0x3aff38: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFF40u;
}
