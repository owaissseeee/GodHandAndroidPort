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

// Function: cEm00_setDevilEventFlag
// Address: 0x275638 - 0x275650
void cEm00_setDevilEventFlag_0x275638(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_setDevilEventFlag_0x275638");
#endif


    // 0x275638: 0x8c821644  lw          $v0, 0x1644($a0)
    ctx->pc = 0x275638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5700)));
    // 0x27563c: 0x3c030080  lui         $v1, 0x80
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x275640: 0x431025  or          $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x275644: 0x3e00008  jr          $ra
    ctx->pc = 0x275644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275644u;
        // 0x275648: 0xac821644  sw          $v0, 0x1644($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x27564c: 0x0  nop
    // NOP
    ctx->pc = 0x275650u;
}