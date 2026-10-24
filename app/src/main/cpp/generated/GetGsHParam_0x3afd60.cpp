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

// Function: GetGsHParam
// Address: 0x3afd60 - 0x3afd70
void GetGsHParam_0x3afd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGsHParam_0x3afd60");
#endif

    switch (ctx->pc) {
        case 0x3afd68u: goto label_3afd68;
        default: break;
    }

    ctx->pc = 0x3afd60u;

    // 0x3afd60: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x3afd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x3afd64: 0xc  syscall     0
    ctx->pc = 0x3afd64u;
    ctx->pc = 0x3AFD68u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3afd68:
    // 0x3afd68: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFD70u;
}
