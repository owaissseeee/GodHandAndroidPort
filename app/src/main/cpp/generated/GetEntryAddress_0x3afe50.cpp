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

// Function: GetEntryAddress
// Address: 0x3afe50 - 0x3afe60
void GetEntryAddress_0x3afe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEntryAddress_0x3afe50");
#endif

    switch (ctx->pc) {
        case 0x3afe58u: goto label_3afe58;
        default: break;
    }

    ctx->pc = 0x3afe50u;

    // 0x3afe50: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x3afe50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x3afe54: 0xc  syscall     0
    ctx->pc = 0x3afe54u;
    ctx->pc = 0x3AFE58u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3afe58:
    // 0x3afe58: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFE60u;
}
