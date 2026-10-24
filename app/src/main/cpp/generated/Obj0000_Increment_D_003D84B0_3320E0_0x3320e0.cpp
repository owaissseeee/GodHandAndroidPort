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

// Function: Obj0000_Increment_D_003D84B0_3320E0
// Address: 0x3320e0 - 0x3320f8
void Obj0000_Increment_D_003D84B0_3320E0_0x3320e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Increment_D_003D84B0_3320E0_0x3320e0");
#endif

    ctx->pc = 0x3320e0u;

    // 0x3320e0: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x3320e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x3320e4: 0x246384b0  addiu       $v1, $v1, -0x7B50
    ctx->pc = 0x3320e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935728));
    // 0x3320e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3320e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3D84B0u));
    // 0x3320ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3320ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3320f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3320F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3320F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3320F0u;
        // 0x3320f4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3320F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3320F8u;
}
