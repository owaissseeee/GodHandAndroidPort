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

// Function: SetEntryParams_1B1928
// Address: 0x1b1928 - 0x1b1938
void SetEntryParams_1B1928_0x1b1928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEntryParams_1B1928_0x1b1928");
#endif

    ctx->pc = 0x1b1928u;

    // 0x1b1928: 0xac850660  sw          $a1, 0x660($a0)
    ctx->pc = 0x1b1928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1632), GPR_U32(ctx, 5));
    // 0x1b192c: 0xa4860664  sh          $a2, 0x664($a0)
    ctx->pc = 0x1b192cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1636), (uint16_t)GPR_U32(ctx, 6));
    // 0x1b1930: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1930u;
        // 0x1b1934: 0xa0800666  sb          $zero, 0x666($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1638), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1938u;
}
