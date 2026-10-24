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

// Function: cEmManage_SetPlSorry
// Address: 0x293110 - 0x293120
void cEmManage_SetPlSorry_0x293110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_SetPlSorry_0x293110");
#endif

    ctx->pc = 0x293110u;

    // 0x293110: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x293110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x293114: 0x3e00008  jr          $ra
    ctx->pc = 0x293114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293114u;
        // 0x293118: 0xa082053d  sb          $v0, 0x53D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1341), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29311Cu;
    // 0x29311c: 0x0  nop
    ctx->pc = 0x29311cu;
    // NOP
    ctx->pc = 0x293120u;
}
