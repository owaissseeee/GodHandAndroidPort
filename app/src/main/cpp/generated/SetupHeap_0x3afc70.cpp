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

// Function: SetupHeap
// Address: 0x3afc70 - 0x3afc80
void SetupHeap_0x3afc70(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetupHeap_0x3afc70");
#endif

    if (__builtin_expect(ctx->pc != 0x3afc70u, 0)) {
        switch (ctx->pc) {
            case 0x3afc78u: goto label_3afc78;
            default: break;
        }
    }


    // 0x3afc70: 0x2403003d  addiu       $v1, $zero, 0x3D
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x3afc74: 0xc  syscall     0
    ctx->pc = 0x3AFC78u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3afc78:
    // 0x3afc78: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFC80u;
}