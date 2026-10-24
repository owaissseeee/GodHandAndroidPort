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

// Function: Obj0000_Get_D_003EEA98_365EB0
// Address: 0x365eb0 - 0x365ec0
void Obj0000_Get_D_003EEA98_365EB0_0x365eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Get_D_003EEA98_365EB0_0x365eb0");
#endif

    ctx->pc = 0x365eb0u;

    // 0x365eb0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x365eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x365eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x365EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365EB4u;
        // 0x365eb8: 0x2442ea98  addiu       $v0, $v0, -0x1568 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365EBCu;
    // 0x365ebc: 0x0  nop
    ctx->pc = 0x365ebcu;
    // NOP
    ctx->pc = 0x365ec0u;
}
