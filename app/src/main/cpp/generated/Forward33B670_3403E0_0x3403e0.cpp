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

// Function: Forward33B670_3403E0
// Address: 0x3403e0 - 0x3403f8
void Forward33B670_3403E0_0x3403e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33B670_3403E0_0x3403e0");
#endif

    ctx->pc = 0x3403e0u;

    // 0x3403e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3403e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3403e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3403e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3403e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3403e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3403ec: 0x80ced9c  j           func_33B670
    ctx->pc = 0x3403ECu;
    ctx->pc = 0x3403F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3403ECu;
    // 0x3403f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B670u, 0x3403ECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3403F4u;
    // 0x3403f4: 0x0  nop
    ctx->pc = 0x3403f4u;
    // NOP
    ctx->pc = 0x3403f8u;
}
