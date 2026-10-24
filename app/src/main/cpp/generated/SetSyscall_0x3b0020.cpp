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

// Function: SetSyscall
// Address: 0x3b0020 - 0x3b0030
void SetSyscall_0x3b0020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSyscall_0x3b0020");
#endif

    switch (ctx->pc) {
        case 0x3b0028u: goto label_3b0028;
        default: break;
    }

    ctx->pc = 0x3b0020u;

    // 0x3b0020: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x3b0020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x3b0024: 0xc  syscall     0
    ctx->pc = 0x3b0024u;
    ctx->pc = 0x3B0028u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3b0028:
    // 0x3b0028: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0030u;
}
