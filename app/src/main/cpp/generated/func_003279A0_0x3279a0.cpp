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

// Function: func_003279A0
// Address: 0x3279a0 - 0x3279b8
void func_003279A0_0x3279a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003279A0_0x3279a0");
#endif

    ctx->pc = 0x3279a0u;

    // 0x3279a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3279A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3279A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279A0u;
        // 0x3279a4: 0x8c8200a8  lw          $v0, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3279A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3279A8u;
    // 0x3279a8: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x3279a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x3279ac: 0x0  nop
    ctx->pc = 0x3279acu;
    // NOP
    // 0x3279b0: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x3279b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x3279b4: 0x0  nop
    ctx->pc = 0x3279b4u;
    // NOP
    ctx->pc = 0x3279b8u;
}
