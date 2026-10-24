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

// Function: Obj0000_Get_D_0045A1B0_360790
// Address: 0x360790 - 0x3607a0
void Obj0000_Get_D_0045A1B0_360790_0x360790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Get_D_0045A1B0_360790_0x360790");
#endif

    ctx->pc = 0x360790u;

    // 0x360790: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x360790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x360794: 0x3e00008  jr          $ra
    ctx->pc = 0x360794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360794u;
        // 0x360798: 0x2442a1b0  addiu       $v0, $v0, -0x5E50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36079Cu;
    // 0x36079c: 0x0  nop
    ctx->pc = 0x36079cu;
    // NOP
    ctx->pc = 0x3607a0u;
}
