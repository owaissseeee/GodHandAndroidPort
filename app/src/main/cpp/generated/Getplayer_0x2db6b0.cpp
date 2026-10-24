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

// Function: Getplayer
// Address: 0x2db6b0 - 0x2db6c0
void Getplayer_0x2db6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Getplayer_0x2db6b0");
#endif

    ctx->pc = 0x2db6b0u;

    // 0x2db6b0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2db6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2db6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB6B4u;
        // 0x2db6b8: 0x8c627a94  lw          $v0, 0x7A94($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31380)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB6BCu;
    // 0x2db6bc: 0x0  nop
    ctx->pc = 0x2db6bcu;
    // NOP
    ctx->pc = 0x2db6c0u;
}
