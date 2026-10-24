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

// Function: ee_print
// Address: 0x3b0030 - 0x3b0040
void ee_print_0x3b0030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ee_print_0x3b0030");
#endif

    switch (ctx->pc) {
        case 0x3b0038u: goto label_3b0038;
        default: break;
    }

    ctx->pc = 0x3b0030u;

    // 0x3b0030: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x3b0030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x3b0034: 0xc  syscall     0
    ctx->pc = 0x3b0034u;
    ctx->pc = 0x3B0038u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3b0038:
    // 0x3b0038: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0040u;
}
