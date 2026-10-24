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

// Function: Forward33B670_33E690
// Address: 0x33e690 - 0x33e6a8
void Forward33B670_33E690_0x33e690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33B670_33E690_0x33e690");
#endif

    ctx->pc = 0x33e690u;

    // 0x33e690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33e690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33e694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33e694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33e698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33e698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e69c: 0x80ced9c  j           func_33B670
    ctx->pc = 0x33E69Cu;
    ctx->pc = 0x33E6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E69Cu;
    // 0x33e6a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B670u, 0x33E69Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33E6A4u;
    // 0x33e6a4: 0x0  nop
    ctx->pc = 0x33e6a4u;
    // NOP
    ctx->pc = 0x33e6a8u;
}
