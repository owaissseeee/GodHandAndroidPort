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

// Function: cEm00_setNeckMoveOff
// Address: 0x2761f8 - 0x276210
void cEm00_setNeckMoveOff_0x2761f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_setNeckMoveOff_0x2761f8");
#endif

    ctx->pc = 0x2761f8u;

    // 0x2761f8: 0x8c8216d4  lw          $v0, 0x16D4($a0)
    ctx->pc = 0x2761f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5844)));
    // 0x2761fc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2761fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x276200: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x276200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x276204: 0x3e00008  jr          $ra
    ctx->pc = 0x276204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276204u;
        // 0x276208: 0xac8216d4  sw          $v0, 0x16D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27620Cu;
    // 0x27620c: 0x0  nop
    ctx->pc = 0x27620cu;
    // NOP
    ctx->pc = 0x276210u;
}
