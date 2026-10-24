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

// Function: SetT2_B0001020_3B6A20
// Address: 0x3b6a20 - 0x3b6a30
void SetT2_B0001020_3B6A20_0x3b6a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetT2_B0001020_3B6A20_0x3b6a20");
#endif

    ctx->pc = 0x3b6a20u;

    // 0x3b6a20: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b6a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6a24: 0x3c04b000  lui         $a0, 0xB000
    ctx->pc = 0x3b6a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45056 << 16));
    // 0x3b6a28: 0x80eda64  j           func_3B6990
    ctx->pc = 0x3B6A28u;
    ctx->pc = 0x3B6A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6A28u;
    // 0x3b6a2c: 0x34841020  ori         $a0, $a0, 0x1020 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6990u, 0x3B6A28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B6A30u;
}
