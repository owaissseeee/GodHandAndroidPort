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

// Function: Forward33BC48_33BD78
// Address: 0x33bd78 - 0x33bd90
void Forward33BC48_33BD78_0x33bd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33BC48_33BD78_0x33bd78");
#endif

    ctx->pc = 0x33bd78u;

    // 0x33bd78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33bd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33bd7c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x33bd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33bd80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33bd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33bd84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33bd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bd88: 0x80cef12  j           func_33BC48
    ctx->pc = 0x33BD88u;
    ctx->pc = 0x33BD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BD88u;
    // 0x33bd8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BC48u, 0x33BD88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33BD90u;
}
