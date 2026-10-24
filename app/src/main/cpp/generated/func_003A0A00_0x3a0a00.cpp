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

// Function: func_003A0A00
// Address: 0x3a0a00 - 0x3a0a10
void func_003A0A00_0x3a0a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A0A00_0x3a0a00");
#endif

    ctx->pc = 0x3a0a00u;

    // 0x3a0a00: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3a0a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3a0a04: 0x80e70e4  j           func_39C390
    ctx->pc = 0x3A0A04u;
    ctx->pc = 0x3A0A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0A04u;
    // 0x3a0a08: 0x24a5e8e0  addiu       $a1, $a1, -0x1720 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x3A0A04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3A0A0Cu;
    // 0x3a0a0c: 0x0  nop
    ctx->pc = 0x3a0a0cu;
    // NOP
    ctx->pc = 0x3a0a10u;
}
