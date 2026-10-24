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

// Function: func_0035FC60
// Address: 0x35fc60 - 0x35fc78
void func_0035FC60_0x35fc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035FC60_0x35fc60");
#endif

    ctx->pc = 0x35fc60u;

    // 0x35fc60: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x35fc60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x35fc64: 0x3e00008  jr          $ra
    ctx->pc = 0x35FC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FC64u;
        // 0x35fc68: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FC6Cu;
    // 0x35fc6c: 0x0  nop
    ctx->pc = 0x35fc6cu;
    // NOP
    // 0x35fc70: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x35fc70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x35fc74: 0x0  nop
    ctx->pc = 0x35fc74u;
    // NOP
    ctx->pc = 0x35fc78u;
}
