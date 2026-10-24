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

// Function: func_002BEDC8
// Address: 0x2bedc8 - 0x2bedd8
void func_002BEDC8_0x2bedc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BEDC8_0x2bedc8");
#endif

    ctx->pc = 0x2bedc8u;

    // 0x2bedc8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2bedc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bedcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDCCu;
        // 0x2bedd0: 0xa0450008  sb          $a1, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEDD4u;
    // 0x2bedd4: 0x0  nop
    ctx->pc = 0x2bedd4u;
    // NOP
    ctx->pc = 0x2bedd8u;
}
