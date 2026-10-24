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

// Function: NoOp_1B80A8
// Address: 0x1b80a8 - 0x1b80c0
void NoOp_1B80A8_0x1b80a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NoOp_1B80A8_0x1b80a8");
#endif

    ctx->pc = 0x1b80a8u;

    // 0x1b80a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B80A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B80A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B80B0u;
    // 0x1b80b0: 0xac8505e8  sw          $a1, 0x5E8($a0)
    ctx->pc = 0x1b80b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1512), GPR_U32(ctx, 5));
    // 0x1b80b4: 0x0  nop
    ctx->pc = 0x1b80b4u;
    // NOP
    // 0x1b80b8: 0xac8505f0  sw          $a1, 0x5F0($a0)
    ctx->pc = 0x1b80b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1520), GPR_U32(ctx, 5));
    // 0x1b80bc: 0x0  nop
    ctx->pc = 0x1b80bcu;
    // NOP
    ctx->pc = 0x1b80c0u;
}
