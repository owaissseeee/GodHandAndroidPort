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

// Function: Obj0000_Swap_D_003C4F00_321218
// Address: 0x321218 - 0x321228
void Obj0000_Swap_D_003C4F00_321218_0x321218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Swap_D_003C4F00_321218_0x321218");
#endif

    ctx->pc = 0x321218u;

    // 0x321218: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x321218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x32121c: 0x8c624f00  lw          $v0, 0x4F00($v1)
    ctx->pc = 0x32121cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C4F00u));
    // 0x321220: 0x3e00008  jr          $ra
    ctx->pc = 0x321220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321220u;
        // 0x321224: 0xac644f00  sw          $a0, 0x4F00($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20224), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321228u;
}
