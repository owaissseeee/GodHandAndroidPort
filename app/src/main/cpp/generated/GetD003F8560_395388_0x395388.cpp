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

// Function: GetD003F8560_395388
// Address: 0x395388 - 0x395398
void GetD003F8560_395388_0x395388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetD003F8560_395388_0x395388");
#endif

    ctx->pc = 0x395388u;

    // 0x395388: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x395388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x39538c: 0x3e00008  jr          $ra
    ctx->pc = 0x39538Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39538Cu;
        // 0x395390: 0x24428560  addiu       $v0, $v0, -0x7AA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935904));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39538Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395394u;
    // 0x395394: 0x0  nop
    ctx->pc = 0x395394u;
    // NOP
    ctx->pc = 0x395398u;
}
