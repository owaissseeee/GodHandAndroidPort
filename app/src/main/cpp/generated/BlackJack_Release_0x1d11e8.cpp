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

// Function: BlackJack_Release
// Address: 0x1d11e8 - 0x1d1208
void BlackJack_Release_0x1d11e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_Release_0x1d11e8");
#endif

    switch (ctx->pc) {
        case 0x1d11f8u: goto label_1d11f8;
        default: break;
    }

    ctx->pc = 0x1d11e8u;

    // 0x1d11e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d11e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d11ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d11ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d11f0: 0xc0753d2  jal         func_1D4F48
    ctx->pc = 0x1D11F0u;
    SET_GPR_U32(ctx, 31, 0x1D11F8u);
    ctx->pc = 0x1D4F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4F48u, 0x1D11F0u, 0x1D11F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D11F8u;
label_1d11f8:
    // 0x1d11f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d11f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d11fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D11FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D11FCu;
        // 0x1d1200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D11FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1204u;
    // 0x1d1204: 0x0  nop
    ctx->pc = 0x1d1204u;
    // NOP
    ctx->pc = 0x1d1208u;
}
