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

// Function: Obj0000_Clear_Fields_94_9C_13C808
// Address: 0x13c808 - 0x13c818
void Obj0000_Clear_Fields_94_9C_13C808_0x13c808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Clear_Fields_94_9C_13C808_0x13c808");
#endif

    ctx->pc = 0x13c808u;

    // 0x13c808: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x13c808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x13c80c: 0x3e00008  jr          $ra
    ctx->pc = 0x13C80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C80Cu;
        // 0x13c810: 0xac800094  sw          $zero, 0x94($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C814u;
    // 0x13c814: 0x0  nop
    ctx->pc = 0x13c814u;
    // NOP
    ctx->pc = 0x13c818u;
}
