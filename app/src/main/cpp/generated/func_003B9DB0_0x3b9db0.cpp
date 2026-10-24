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

// Function: func_003B9DB0
// Address: 0x3b9db0 - 0x3b9dc8
void func_003B9DB0_0x3b9db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B9DB0_0x3b9db0");
#endif

    ctx->pc = 0x3b9db0u;

    // 0x3b9db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b9db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b9db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b9db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b9db8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b9db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9dbc: 0x80ced96  j           func_33B658
    ctx->pc = 0x3B9DBCu;
    ctx->pc = 0x3B9DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9DBCu;
    // 0x3b9dc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B658u, 0x3B9DBCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B9DC4u;
    // 0x3b9dc4: 0x0  nop
    ctx->pc = 0x3b9dc4u;
    // NOP
    ctx->pc = 0x3b9dc8u;
}
