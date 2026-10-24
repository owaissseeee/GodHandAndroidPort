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

// Function: Forward325C98_325DC0
// Address: 0x325dc0 - 0x325dd8
void Forward325C98_325DC0_0x325dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward325C98_325DC0_0x325dc0");
#endif

    ctx->pc = 0x325dc0u;

    // 0x325dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x325dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x325dc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325dc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325dcc: 0x80c9726  j           func_325C98
    ctx->pc = 0x325DCCu;
    ctx->pc = 0x325DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325DCCu;
    // 0x325dd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325C98u, 0x325DCCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x325DD4u;
    // 0x325dd4: 0x0  nop
    ctx->pc = 0x325dd4u;
    // NOP
    ctx->pc = 0x325dd8u;
}
