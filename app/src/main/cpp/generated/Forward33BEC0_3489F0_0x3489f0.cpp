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

// Function: Forward33BEC0_3489F0
// Address: 0x3489f0 - 0x348a08
void Forward33BEC0_3489F0_0x3489f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33BEC0_3489F0_0x3489f0");
#endif

    ctx->pc = 0x3489f0u;

    // 0x3489f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3489f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3489f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3489f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3489f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3489f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3489fc: 0x80cefb0  j           func_33BEC0
    ctx->pc = 0x3489FCu;
    ctx->pc = 0x348A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3489FCu;
    // 0x348a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BEC0u, 0x3489FCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x348A04u;
    // 0x348a04: 0x0  nop
    ctx->pc = 0x348a04u;
    // NOP
    ctx->pc = 0x348a08u;
}
