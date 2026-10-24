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

// Function: func_0036CA38
// Address: 0x36ca38 - 0x36ca50
void func_0036CA38_0x36ca38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CA38_0x36ca38");
#endif

    ctx->pc = 0x36ca38u;

    // 0x36ca38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ca38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36ca3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36ca3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36ca40: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x36ca40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x36ca44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ca44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ca48: 0x80d2d92  j           func_34B648
    ctx->pc = 0x36CA48u;
    ctx->pc = 0x36CA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CA48u;
    // 0x36ca4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B648u, 0x36CA48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36CA50u;
}
