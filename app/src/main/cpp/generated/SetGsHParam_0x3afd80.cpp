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

// Function: SetGsHParam
// Address: 0x3afd80 - 0x3afd90
void SetGsHParam_0x3afd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetGsHParam_0x3afd80");
#endif

    switch (ctx->pc) {
        case 0x3afd88u: goto label_3afd88;
        default: break;
    }

    ctx->pc = 0x3afd80u;

    // 0x3afd80: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x3afd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x3afd84: 0xc  syscall     0
    ctx->pc = 0x3afd84u;
    ctx->pc = 0x3AFD88u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3afd88:
    // 0x3afd88: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFD90u;
}
