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

// Function: cPartsCamera_SetParts
// Address: 0x139b68 - 0x139b78
void cPartsCamera_SetParts_0x139b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cPartsCamera_SetParts_0x139b68");
#endif

    ctx->pc = 0x139b68u;

    // 0x139b68: 0xac870368  sw          $a3, 0x368($a0)
    ctx->pc = 0x139b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 872), GPR_U32(ctx, 7));
    // 0x139b6c: 0xac850360  sw          $a1, 0x360($a0)
    ctx->pc = 0x139b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 864), GPR_U32(ctx, 5));
    // 0x139b70: 0x3e00008  jr          $ra
    ctx->pc = 0x139B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139B70u;
        // 0x139b74: 0xac860364  sw          $a2, 0x364($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 868), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139B78u;
}
