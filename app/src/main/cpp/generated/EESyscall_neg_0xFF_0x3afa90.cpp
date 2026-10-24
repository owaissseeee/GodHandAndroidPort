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

// Function: EESyscall_neg_0xFF
// Address: 0x3afa90 - 0x3afaa0
void EESyscall_neg_0xFF_0x3afa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EESyscall_neg_0xFF_0x3afa90");
#endif

    switch (ctx->pc) {
        case 0x3afa98u: goto label_3afa98;
        default: break;
    }

    ctx->pc = 0x3afa90u;

    // 0x3afa90: 0x2403ff01  addiu       $v1, $zero, -0xFF
    ctx->pc = 0x3afa90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x3afa94: 0xc  syscall     0
    ctx->pc = 0x3afa94u;
    ctx->pc = 0x3AFA98u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3afa98:
    // 0x3afa98: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFAA0u;
}
