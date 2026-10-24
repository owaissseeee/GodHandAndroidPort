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

// Function: EESyscall_0x3F
// Address: 0x3afc90 - 0x3afca0
void EESyscall_0x3F_0x3afc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EESyscall_0x3F_0x3afc90");
#endif

    switch (ctx->pc) {
        case 0x3afc98u: goto label_3afc98;
        default: break;
    }

    ctx->pc = 0x3afc90u;

    // 0x3afc90: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x3afc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3afc94: 0xc  syscall     0
    ctx->pc = 0x3afc94u;
    ctx->pc = 0x3AFC98u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3afc98:
    // 0x3afc98: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFCA0u;
}
