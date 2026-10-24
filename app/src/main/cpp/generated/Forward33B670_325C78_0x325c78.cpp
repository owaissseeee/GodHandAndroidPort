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

// Function: Forward33B670_325C78
// Address: 0x325c78 - 0x325c98
void Forward33B670_325C78_0x325c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33B670_325C78_0x325c78");
#endif

    ctx->pc = 0x325c78u;

    // 0x325c78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x325c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x325c7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325c84: 0x80ced9c  j           func_33B670
    ctx->pc = 0x325C84u;
    ctx->pc = 0x325C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325C84u;
    // 0x325c88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B670u, 0x325C84u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x325C8Cu;
    // 0x325c8c: 0x0  nop
    ctx->pc = 0x325c8cu;
    // NOP
    // 0x325c90: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x325c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x325c94: 0x0  nop
    ctx->pc = 0x325c94u;
    // NOP
    ctx->pc = 0x325c98u;
}
