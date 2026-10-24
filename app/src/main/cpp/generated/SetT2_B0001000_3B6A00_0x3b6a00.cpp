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

// Function: SetT2_B0001000_3B6A00
// Address: 0x3b6a00 - 0x3b6a10
void SetT2_B0001000_3B6A00_0x3b6a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetT2_B0001000_3B6A00_0x3b6a00");
#endif

    ctx->pc = 0x3b6a00u;

    // 0x3b6a00: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b6a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6a04: 0x3c04b000  lui         $a0, 0xB000
    ctx->pc = 0x3b6a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45056 << 16));
    // 0x3b6a08: 0x80eda64  j           func_3B6990
    ctx->pc = 0x3B6A08u;
    ctx->pc = 0x3B6A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6A08u;
    // 0x3b6a0c: 0x34841000  ori         $a0, $a0, 0x1000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6990u, 0x3B6A08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B6A10u;
}
