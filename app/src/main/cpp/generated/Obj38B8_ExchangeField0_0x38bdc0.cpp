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

// Function: Obj38B8_ExchangeField0
// Address: 0x38bdc0 - 0x38bdd0
void Obj38B8_ExchangeField0_0x38bdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj38B8_ExchangeField0_0x38bdc0");
#endif

    ctx->pc = 0x38bdc0u;

    // 0x38bdc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x38bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38bdc4: 0x3e00008  jr          $ra
    ctx->pc = 0x38BDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BDC4u;
        // 0x38bdc8: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BDCCu;
    // 0x38bdcc: 0x0  nop
    ctx->pc = 0x38bdccu;
    // NOP
    ctx->pc = 0x38bdd0u;
}
