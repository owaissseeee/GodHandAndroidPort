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

// Function: ClearFields_4_8_C_E_159998
// Address: 0x159998 - 0x1599b0
void ClearFields_4_8_C_E_159998_0x159998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearFields_4_8_C_E_159998_0x159998");
#endif

    ctx->pc = 0x159998u;

    // 0x159998: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x159998u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x15999c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x15999cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1599a0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1599a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1599a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1599A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1599A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599A4u;
        // 0x1599a8: 0xa480000c  sh          $zero, 0xC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1599A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1599ACu;
    // 0x1599ac: 0x0  nop
    ctx->pc = 0x1599acu;
    // NOP
    ctx->pc = 0x1599b0u;
}
