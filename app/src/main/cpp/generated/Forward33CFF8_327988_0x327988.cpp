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

// Function: Forward33CFF8_327988
// Address: 0x327988 - 0x3279a0
void Forward33CFF8_327988_0x327988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33CFF8_327988_0x327988");
#endif

    ctx->pc = 0x327988u;

    // 0x327988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32798c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32798cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x327990: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x327990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x327994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x327994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327998: 0x80cf3fe  j           func_33CFF8
    ctx->pc = 0x327998u;
    ctx->pc = 0x32799Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327998u;
    // 0x32799c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CFF8u, 0x327998u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3279A0u;
}
