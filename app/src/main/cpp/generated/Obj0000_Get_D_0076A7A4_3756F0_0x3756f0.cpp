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

// Function: Obj0000_Get_D_0076A7A4_3756F0
// Address: 0x3756f0 - 0x375700
void Obj0000_Get_D_0076A7A4_3756F0_0x3756f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Get_D_0076A7A4_3756F0_0x3756f0");
#endif

    ctx->pc = 0x3756f0u;

    // 0x3756f0: 0x3c030077  lui         $v1, 0x77
    ctx->pc = 0x3756f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)119 << 16));
    // 0x3756f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3756F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3756F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3756F4u;
        // 0x3756f8: 0x8c62a7a4  lw          $v0, -0x585C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944676)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3756F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3756FCu;
    // 0x3756fc: 0x0  nop
    ctx->pc = 0x3756fcu;
    // NOP
    ctx->pc = 0x375700u;
}
