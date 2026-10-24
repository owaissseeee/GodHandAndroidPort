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

// Function: EESyscall_neg_0x53
// Address: 0x3afdd0 - 0x3afde0
void EESyscall_neg_0x53_0x3afdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EESyscall_neg_0x53_0x3afdd0");
#endif

    switch (ctx->pc) {
        case 0x3afdd8u: goto label_3afdd8;
        default: break;
    }

    ctx->pc = 0x3afdd0u;

    // 0x3afdd0: 0x2403ffad  addiu       $v1, $zero, -0x53
    ctx->pc = 0x3afdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967213));
    // 0x3afdd4: 0xc  syscall     0
    ctx->pc = 0x3afdd4u;
    ctx->pc = 0x3AFDD8u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3afdd8:
    // 0x3afdd8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFDE0u;
}
