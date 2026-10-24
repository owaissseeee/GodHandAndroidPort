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

// Function: func_002E82F8
// Address: 0x2e82f8 - 0x2e8318
void func_002E82F8_0x2e82f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E82F8_0x2e82f8");
#endif

    switch (ctx->pc) {
        case 0x2e8308u: goto label_2e8308;
        default: break;
    }

    ctx->pc = 0x2e82f8u;

    // 0x2e82f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e82f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e82fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e82fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e8300: 0xc0befb4  jal         func_2FBED0
    ctx->pc = 0x2E8300u;
    SET_GPR_U32(ctx, 31, 0x2E8308u);
    ctx->pc = 0x2FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBED0u, 0x2E8300u, 0x2E8308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8308u;
label_2e8308:
    // 0x2e8308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e830c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E830Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E830Cu;
        // 0x2e8310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E830Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8314u;
    // 0x2e8314: 0x0  nop
    ctx->pc = 0x2e8314u;
    // NOP
    ctx->pc = 0x2e8318u;
}
