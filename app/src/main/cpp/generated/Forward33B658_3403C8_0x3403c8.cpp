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

// Function: Forward33B658_3403C8
// Address: 0x3403c8 - 0x3403e0
void Forward33B658_3403C8_0x3403c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33B658_3403C8_0x3403c8");
#endif

    ctx->pc = 0x3403c8u;

    // 0x3403c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3403c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3403cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3403ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3403d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3403d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3403d4: 0x80ced96  j           func_33B658
    ctx->pc = 0x3403D4u;
    ctx->pc = 0x3403D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3403D4u;
    // 0x3403d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B658u, 0x3403D4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3403DCu;
    // 0x3403dc: 0x0  nop
    ctx->pc = 0x3403dcu;
    // NOP
    ctx->pc = 0x3403e0u;
}
