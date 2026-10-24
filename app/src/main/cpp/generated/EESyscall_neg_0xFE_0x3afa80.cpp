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

// Function: EESyscall_neg_0xFE
// Address: 0x3afa80 - 0x3afa90
void EESyscall_neg_0xFE_0x3afa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EESyscall_neg_0xFE_0x3afa80");
#endif

    switch (ctx->pc) {
        case 0x3afa88u: goto label_3afa88;
        default: break;
    }

    ctx->pc = 0x3afa80u;

    // 0x3afa80: 0x2403ff02  addiu       $v1, $zero, -0xFE
    ctx->pc = 0x3afa80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967042));
    // 0x3afa84: 0xc  syscall     0
    ctx->pc = 0x3afa84u;
    ctx->pc = 0x3AFA88u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3afa88:
    // 0x3afa88: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFA90u;
}
