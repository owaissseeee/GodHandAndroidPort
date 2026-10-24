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

// Function: func_00343AD0
// Address: 0x343ad0 - 0x343ae8
void func_00343AD0_0x343ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00343AD0_0x343ad0");
#endif

    ctx->pc = 0x343ad0u;

    // 0x343ad0: 0x24820160  addiu       $v0, $a0, 0x160
    ctx->pc = 0x343ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x343ad4: 0xac820178  sw          $v0, 0x178($a0)
    ctx->pc = 0x343ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 376), GPR_U32(ctx, 2));
    // 0x343ad8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x343ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x343adc: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x343adcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x343ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x343AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343AE0u;
        // 0x343ae4: 0xac470008  sw          $a3, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343AE8u;
}
