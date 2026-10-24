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

// Function: Forward33F130_336E70
// Address: 0x336e70 - 0x336e88
void Forward33F130_336E70_0x336e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33F130_336E70_0x336e70");
#endif

    ctx->pc = 0x336e70u;

    // 0x336e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336e74: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x336e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336e78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x336e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x336e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336e80: 0x80cfc4c  j           func_33F130
    ctx->pc = 0x336E80u;
    ctx->pc = 0x336E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336E80u;
    // 0x336e84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x336E80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x336E88u;
}
