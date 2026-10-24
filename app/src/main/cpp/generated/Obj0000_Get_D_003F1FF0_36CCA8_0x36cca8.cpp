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

// Function: Obj0000_Get_D_003F1FF0_36CCA8
// Address: 0x36cca8 - 0x36ccc8
void Obj0000_Get_D_003F1FF0_36CCA8_0x36cca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Get_D_003F1FF0_36CCA8_0x36cca8");
#endif

    ctx->pc = 0x36cca8u;

    // 0x36cca8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x36cca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x36ccac: 0x3e00008  jr          $ra
    ctx->pc = 0x36CCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CCACu;
        // 0x36ccb0: 0x8c621ff0  lw          $v0, 0x1FF0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8176)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CCB4u;
    // 0x36ccb4: 0x0  nop
    ctx->pc = 0x36ccb4u;
    // NOP
    // 0x36ccb8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x36ccb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36ccbc: 0x0  nop
    ctx->pc = 0x36ccbcu;
    // NOP
    // 0x36ccc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x36ccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36ccc4: 0x0  nop
    ctx->pc = 0x36ccc4u;
    // NOP
    ctx->pc = 0x36ccc8u;
}
