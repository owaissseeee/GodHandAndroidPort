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

// Function: Forward33F690_325DD8
// Address: 0x325dd8 - 0x325df0
void Forward33F690_325DD8_0x325dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33F690_325DD8_0x325dd8");
#endif

    ctx->pc = 0x325dd8u;

    // 0x325dd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x325dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x325ddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325de4: 0x80cfda4  j           func_33F690
    ctx->pc = 0x325DE4u;
    ctx->pc = 0x325DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325DE4u;
    // 0x325de8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F690u, 0x325DE4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x325DECu;
    // 0x325dec: 0x0  nop
    ctx->pc = 0x325decu;
    // NOP
    ctx->pc = 0x325df0u;
}
