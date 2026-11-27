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

// Function: func_003A0F80
// Address: 0x3a0f80 - 0x3a0f88
void func_003A0F80_0x3a0f80(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A0F80_0x3a0f80");
#endif


    // 0x3a0f80: 0x80e8388  j           func_3A0E20
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0F80u;
    // 0x3a0f84: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0E20u, 0x3A0F80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3A0F88u;
}