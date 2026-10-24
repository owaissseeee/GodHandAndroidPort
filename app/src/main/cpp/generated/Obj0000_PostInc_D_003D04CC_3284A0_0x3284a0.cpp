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

// Function: Obj0000_PostInc_D_003D04CC_3284A0
// Address: 0x3284a0 - 0x3284b8
void Obj0000_PostInc_D_003D04CC_3284A0_0x3284a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_PostInc_D_003D04CC_3284A0_0x3284a0");
#endif

    ctx->pc = 0x3284a0u;

    // 0x3284a0: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3284a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3284a4: 0x246304cc  addiu       $v1, $v1, 0x4CC
    ctx->pc = 0x3284a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1228));
    // 0x3284a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3284a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3D04CCu));
    // 0x3284ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3284acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3284b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3284B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3284B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3284B0u;
        // 0x3284b4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3284B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3284B8u;
}
