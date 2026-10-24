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

// Function: Forward33BF18_348BC8
// Address: 0x348bc8 - 0x348be0
void Forward33BF18_348BC8_0x348bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33BF18_348BC8_0x348bc8");
#endif

    ctx->pc = 0x348bc8u;

    // 0x348bc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x348bcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x348bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348bd4: 0x80cefc6  j           func_33BF18
    ctx->pc = 0x348BD4u;
    ctx->pc = 0x348BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348BD4u;
    // 0x348bd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BF18u, 0x348BD4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x348BDCu;
    // 0x348bdc: 0x0  nop
    ctx->pc = 0x348bdcu;
    // NOP
    ctx->pc = 0x348be0u;
}
