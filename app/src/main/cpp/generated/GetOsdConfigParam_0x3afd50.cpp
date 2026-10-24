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

// Function: GetOsdConfigParam
// Address: 0x3afd50 - 0x3afd60
void GetOsdConfigParam_0x3afd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOsdConfigParam_0x3afd50");
#endif

    switch (ctx->pc) {
        case 0x3afd58u: goto label_3afd58;
        default: break;
    }

    ctx->pc = 0x3afd50u;

    // 0x3afd50: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x3afd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x3afd54: 0xc  syscall     0
    ctx->pc = 0x3afd54u;
    ctx->pc = 0x3AFD58u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3afd58:
    // 0x3afd58: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFD60u;
}
