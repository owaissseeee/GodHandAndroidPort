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

// Function: func_0039C218
// Address: 0x39c218 - 0x39c228
void func_0039C218_0x39c218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0039C218_0x39c218");
#endif

    ctx->pc = 0x39c218u;

    // 0x39c218: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x39c218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c21c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x39c21cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x39c220: 0x80ec7ca  j           func_3B1F28
    ctx->pc = 0x39C220u;
    ctx->pc = 0x39C224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C220u;
    // 0x39c224: 0x2484e630  addiu       $a0, $a0, -0x19D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x39C220u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39C228u;
}
