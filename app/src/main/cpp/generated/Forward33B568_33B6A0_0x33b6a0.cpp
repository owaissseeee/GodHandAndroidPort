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

// Function: Forward33B568_33B6A0
// Address: 0x33b6a0 - 0x33b6b8
void Forward33B568_33B6A0_0x33b6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33B568_33B6A0_0x33b6a0");
#endif

    ctx->pc = 0x33b6a0u;

    // 0x33b6a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33b6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33b6a4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x33b6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33b6a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33b6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33b6ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b6b0: 0x80ced5a  j           func_33B568
    ctx->pc = 0x33B6B0u;
    ctx->pc = 0x33B6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B6B0u;
    // 0x33b6b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B568u, 0x33B6B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33B6B8u;
}
