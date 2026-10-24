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

// Function: EESyscall_0xFD
// Address: 0x3afa30 - 0x3afa40
void EESyscall_0xFD_0x3afa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EESyscall_0xFD_0x3afa30");
#endif

    switch (ctx->pc) {
        case 0x3afa38u: goto label_3afa38;
        default: break;
    }

    ctx->pc = 0x3afa30u;

    // 0x3afa30: 0x240300fd  addiu       $v1, $zero, 0xFD
    ctx->pc = 0x3afa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x3afa34: 0xc  syscall     0
    ctx->pc = 0x3afa34u;
    ctx->pc = 0x3AFA38u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3afa38:
    // 0x3afa38: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFA40u;
}
