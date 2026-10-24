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

// Function: Obj3290_SetGlobal_D003D1400
// Address: 0x329260 - 0x329278
void Obj3290_SetGlobal_D003D1400_0x329260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3290_SetGlobal_D003D1400_0x329260");
#endif

    ctx->pc = 0x329260u;

    // 0x329260: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x329260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x329264: 0x3e00008  jr          $ra
    ctx->pc = 0x329264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329264u;
        // 0x329268: 0xac441400  sw          $a0, 0x1400($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 5120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32926Cu;
    // 0x32926c: 0x0  nop
    ctx->pc = 0x32926cu;
    // NOP
    // 0x329270: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x329270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x329274: 0x0  nop
    ctx->pc = 0x329274u;
    // NOP
    ctx->pc = 0x329278u;
}
