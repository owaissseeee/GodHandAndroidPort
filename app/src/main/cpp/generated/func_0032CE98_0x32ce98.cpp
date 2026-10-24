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

// Function: func_0032CE98
// Address: 0x32ce98 - 0x32ceb0
void func_0032CE98_0x32ce98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032CE98_0x32ce98");
#endif

    ctx->pc = 0x32ce98u;

    // 0x32ce98: 0x3e00008  jr          $ra
    ctx->pc = 0x32CE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CEA0u;
    // 0x32cea0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32cea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32cea4: 0x0  nop
    ctx->pc = 0x32cea4u;
    // NOP
    // 0x32cea8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32cea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32ceac: 0x0  nop
    ctx->pc = 0x32ceacu;
    // NOP
    ctx->pc = 0x32ceb0u;
}
