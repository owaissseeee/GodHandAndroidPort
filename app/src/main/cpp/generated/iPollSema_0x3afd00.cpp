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

// Function: iPollSema
// Address: 0x3afd00 - 0x3afd10
void iPollSema_0x3afd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iPollSema_0x3afd00");
#endif

    switch (ctx->pc) {
        case 0x3afd08u: goto label_3afd08;
        default: break;
    }

    ctx->pc = 0x3afd00u;

    // 0x3afd00: 0x2403ffba  addiu       $v1, $zero, -0x46
    ctx->pc = 0x3afd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967226));
    // 0x3afd04: 0xc  syscall     0
    ctx->pc = 0x3afd04u;
    ctx->pc = 0x3AFD08u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3afd08:
    // 0x3afd08: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFD10u;
}
