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

// Function: GetGsVParam
// Address: 0x3afd70 - 0x3afd80
void GetGsVParam_0x3afd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGsVParam_0x3afd70");
#endif

    switch (ctx->pc) {
        case 0x3afd78u: goto label_3afd78;
        default: break;
    }

    ctx->pc = 0x3afd70u;

    // 0x3afd70: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x3afd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x3afd74: 0xc  syscall     0
    ctx->pc = 0x3afd74u;
    ctx->pc = 0x3AFD78u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3afd78:
    // 0x3afd78: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFD80u;
}
