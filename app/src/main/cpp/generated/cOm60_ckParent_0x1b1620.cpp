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

// Function: cOm60_ckParent
// Address: 0x1b1620 - 0x1b1630
void cOm60_ckParent_0x1b1620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm60_ckParent_0x1b1620");
#endif

    ctx->pc = 0x1b1620u;

    // 0x1b1620: 0x8c820600  lw          $v0, 0x600($a0)
    ctx->pc = 0x1b1620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1536)));
    // 0x1b1624: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1624u;
        // 0x1b1628: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B162Cu;
    // 0x1b162c: 0x0  nop
    ctx->pc = 0x1b162cu;
    // NOP
    ctx->pc = 0x1b1630u;
}
