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

// Function: func_003554F8
// Address: 0x3554f8 - 0x355508
void func_003554F8_0x3554f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003554F8_0x3554f8");
#endif

    ctx->pc = 0x3554f8u;

    // 0x3554f8: 0x8c821fc0  lw          $v0, 0x1FC0($a0)
    ctx->pc = 0x3554f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x3554fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3554FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3554FCu;
        // 0x355500: 0xac450080  sw          $a1, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3554FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355504u;
    // 0x355504: 0x0  nop
    ctx->pc = 0x355504u;
    // NOP
    ctx->pc = 0x355508u;
}
