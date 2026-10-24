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

// Function: cEmManage_SetPlCatched
// Address: 0x2930f0 - 0x293100
void cEmManage_SetPlCatched_0x2930f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_SetPlCatched_0x2930f0");
#endif

    ctx->pc = 0x2930f0u;

    // 0x2930f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2930f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2930f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2930F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2930F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930F4u;
        // 0x2930f8: 0xa082053c  sb          $v0, 0x53C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1340), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2930F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2930FCu;
    // 0x2930fc: 0x0  nop
    ctx->pc = 0x2930fcu;
    // NOP
    ctx->pc = 0x293100u;
}
