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

// Function: Obj35E8_SetIndirect_30_18
// Address: 0x35ef40 - 0x35ef50
void Obj35E8_SetIndirect_30_18_0x35ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj35E8_SetIndirect_30_18_0x35ef40");
#endif

    ctx->pc = 0x35ef40u;

    // 0x35ef40: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x35ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x35ef44: 0x3e00008  jr          $ra
    ctx->pc = 0x35EF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF44u;
        // 0x35ef48: 0xac450018  sw          $a1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EF4Cu;
    // 0x35ef4c: 0x0  nop
    ctx->pc = 0x35ef4cu;
    // NOP
    ctx->pc = 0x35ef50u;
}
