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

// Function: Forward33B938_348A50
// Address: 0x348a50 - 0x348a70
void Forward33B938_348A50_0x348a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33B938_348A50_0x348a50");
#endif

    ctx->pc = 0x348a50u;

    // 0x348a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x348a54: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x348a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x348a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x348a5c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x348a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348a60: 0x8c450d84  lw          $a1, 0xD84($v0)
    ctx->pc = 0x348a60u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x760D84u));
    // 0x348a64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348a68: 0x80cee4e  j           func_33B938
    ctx->pc = 0x348A68u;
    ctx->pc = 0x348A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348A68u;
    // 0x348a6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B938u, 0x348A68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x348A70u;
}
