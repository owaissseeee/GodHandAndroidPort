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

// Function: Forward33B938_348AA8
// Address: 0x348aa8 - 0x348ac8
void Forward33B938_348AA8_0x348aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33B938_348AA8_0x348aa8");
#endif

    ctx->pc = 0x348aa8u;

    // 0x348aa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x348aac: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x348aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x348ab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x348ab4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x348ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x348ab8: 0x8c450d88  lw          $a1, 0xD88($v0)
    ctx->pc = 0x348ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x760D88u));
    // 0x348abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348ac0: 0x80cee4e  j           func_33B938
    ctx->pc = 0x348AC0u;
    ctx->pc = 0x348AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348AC0u;
    // 0x348ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B938u, 0x348AC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x348AC8u;
}
