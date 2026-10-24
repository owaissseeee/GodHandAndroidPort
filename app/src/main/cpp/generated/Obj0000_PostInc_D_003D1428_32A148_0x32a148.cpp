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

// Function: Obj0000_PostInc_D_003D1428_32A148
// Address: 0x32a148 - 0x32a160
void Obj0000_PostInc_D_003D1428_32A148_0x32a148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_PostInc_D_003D1428_32A148_0x32a148");
#endif

    ctx->pc = 0x32a148u;

    // 0x32a148: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x32a148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x32a14c: 0x24631428  addiu       $v1, $v1, 0x1428
    ctx->pc = 0x32a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5160));
    // 0x32a150: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32a150u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3D1428u));
    // 0x32a154: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32a154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32a158: 0x3e00008  jr          $ra
    ctx->pc = 0x32A158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A158u;
        // 0x32a15c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A160u;
}
