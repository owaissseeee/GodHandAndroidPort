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

// Function: func_003B64E8
// Address: 0x3b64e8 - 0x3b6500
void func_003B64E8_0x3b64e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B64E8_0x3b64e8");
#endif

    switch (ctx->pc) {
        case 0x3b64f0u: goto label_3b64f0;
        default: break;
    }

    ctx->pc = 0x3b64e8u;

    // 0x3b64e8: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x3b64e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x3b64ec: 0xc  syscall     0
    ctx->pc = 0x3b64ecu;
    ctx->pc = 0x3B64F0u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3b64f0:
    // 0x3b64f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B64F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B64F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B64F8u;
    // 0x3b64f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3b64f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3b64fc: 0x0  nop
    ctx->pc = 0x3b64fcu;
    // NOP
    ctx->pc = 0x3b6500u;
}
