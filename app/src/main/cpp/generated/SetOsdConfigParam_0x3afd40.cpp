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

// Function: SetOsdConfigParam
// Address: 0x3afd40 - 0x3afd50
void SetOsdConfigParam_0x3afd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetOsdConfigParam_0x3afd40");
#endif

    switch (ctx->pc) {
        case 0x3afd48u: goto label_3afd48;
        default: break;
    }

    ctx->pc = 0x3afd40u;

    // 0x3afd40: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x3afd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x3afd44: 0xc  syscall     0
    ctx->pc = 0x3afd44u;
    ctx->pc = 0x3AFD48u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3afd48:
    // 0x3afd48: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFD48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFD50u;
}
