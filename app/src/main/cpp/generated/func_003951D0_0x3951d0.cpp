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

// Function: func_003951D0
// Address: 0x3951d0 - 0x3951f8
void func_003951D0_0x3951d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003951D0_0x3951d0");
#endif

    ctx->pc = 0x3951d0u;

    // 0x3951d0: 0x0  nop
    ctx->pc = 0x3951d0u;
    // NOP
    // 0x3951d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3951D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3951D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3951DCu;
    // 0x3951dc: 0x0  nop
    ctx->pc = 0x3951dcu;
    // NOP
    // 0x3951e0: 0x0  nop
    ctx->pc = 0x3951e0u;
    // NOP
    // 0x3951e4: 0x0  nop
    ctx->pc = 0x3951e4u;
    // NOP
    // 0x3951e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3951e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3951ec: 0x0  nop
    ctx->pc = 0x3951ecu;
    // NOP
    // 0x3951f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3951f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3951f4: 0x0  nop
    ctx->pc = 0x3951f4u;
    // NOP
    ctx->pc = 0x3951f8u;
}
