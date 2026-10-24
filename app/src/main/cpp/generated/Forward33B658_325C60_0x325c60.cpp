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

// Function: Forward33B658_325C60
// Address: 0x325c60 - 0x325c78
void Forward33B658_325C60_0x325c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33B658_325C60_0x325c60");
#endif

    ctx->pc = 0x325c60u;

    // 0x325c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x325c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x325c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325c6c: 0x80ced96  j           func_33B658
    ctx->pc = 0x325C6Cu;
    ctx->pc = 0x325C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325C6Cu;
    // 0x325c70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B658u, 0x325C6Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x325C74u;
    // 0x325c74: 0x0  nop
    ctx->pc = 0x325c74u;
    // NOP
    ctx->pc = 0x325c78u;
}
