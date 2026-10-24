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

// Function: cCoreSave_saveWorldTime
// Address: 0x1f9c30 - 0x1f9c58
void cCoreSave_saveWorldTime_0x1f9c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_saveWorldTime_0x1f9c30");
#endif

    ctx->pc = 0x1f9c30u;

    // 0x1f9c30: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1f9c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1f9c34: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f9c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9c38: 0x8c46a990  lw          $a2, -0x5670($v0)
    ctx->pc = 0x1f9c38u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x61A990u));
    // 0x1f9c3c: 0x2442a990  addiu       $v0, $v0, -0x5670
    ctx->pc = 0x1f9c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945168));
    // 0x1f9c40: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1f9c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1f9c44: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1f9c44u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x61A994u));
    // 0x1f9c48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f9c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C4Cu;
        // 0x1f9c50: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9C54u;
    // 0x1f9c54: 0x0  nop
    ctx->pc = 0x1f9c54u;
    // NOP
    ctx->pc = 0x1f9c58u;
}
