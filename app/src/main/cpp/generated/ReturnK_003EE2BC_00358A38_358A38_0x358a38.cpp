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

// Function: ReturnK_003EE2BC_00358A38_358A38
// Address: 0x358a38 - 0x358a48
void ReturnK_003EE2BC_00358A38_358A38_0x358a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReturnK_003EE2BC_00358A38_358A38_0x358a38");
#endif

    ctx->pc = 0x358a38u;

    // 0x358a38: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x358a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x358a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x358A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A3Cu;
        // 0x358a40: 0x8c62e2bc  lw          $v0, -0x1D44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959804)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358A44u;
    // 0x358a44: 0x0  nop
    ctx->pc = 0x358a44u;
    // NOP
    ctx->pc = 0x358a48u;
}
