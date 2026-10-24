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

// Function: GetJacket
// Address: 0x2db6c0 - 0x2db6d0
void GetJacket_0x2db6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetJacket_0x2db6c0");
#endif

    ctx->pc = 0x2db6c0u;

    // 0x2db6c0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2db6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2db6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB6C4u;
        // 0x2db6c8: 0x8c627a98  lw          $v0, 0x7A98($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31384)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB6CCu;
    // 0x2db6cc: 0x0  nop
    ctx->pc = 0x2db6ccu;
    // NOP
    ctx->pc = 0x2db6d0u;
}
