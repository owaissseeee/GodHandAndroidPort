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

// Function: cOmBase_canCarry
// Address: 0x1b79d0 - 0x1b79e0
void cOmBase_canCarry_0x1b79d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_canCarry_0x1b79d0");
#endif

    ctx->pc = 0x1b79d0u;

    // 0x1b79d0: 0x9c8205b0  lwu         $v0, 0x5B0($a0)
    ctx->pc = 0x1b79d0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1456)));
    // 0x1b79d4: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1b79d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
    // 0x1b79d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B79D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B79DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79D8u;
        // 0x1b79dc: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B79D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B79E0u;
}
