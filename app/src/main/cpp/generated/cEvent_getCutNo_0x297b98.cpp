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

// Function: cEvent_getCutNo
// Address: 0x297b98 - 0x297ba8
void cEvent_getCutNo_0x297b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_getCutNo_0x297b98");
#endif

    ctx->pc = 0x297b98u;

    // 0x297b98: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x297b98u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297B98u) & 0xFFFFu)) << 16));
    // 0x297b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x297B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297B9Cu;
        // 0x297ba0: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297BA0u) & 0xFFFFu)))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297BA4u;
    // 0x297ba4: 0x0  nop
    ctx->pc = 0x297ba4u;
    // NOP
    ctx->pc = 0x297ba8u;
}
