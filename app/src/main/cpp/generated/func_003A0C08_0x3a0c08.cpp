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

// Function: func_003A0C08
// Address: 0x3a0c08 - 0x3a0c18
void func_003A0C08_0x3a0c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A0C08_0x3a0c08");
#endif

    ctx->pc = 0x3a0c08u;

    // 0x3a0c08: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3a0c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3a0c0c: 0x80e70e4  j           func_39C390
    ctx->pc = 0x3A0C0Cu;
    ctx->pc = 0x3A0C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0C0Cu;
    // 0x3a0c10: 0x24a5e930  addiu       $a1, $a1, -0x16D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x3A0C0Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3A0C14u;
    // 0x3a0c14: 0x0  nop
    ctx->pc = 0x3a0c14u;
    // NOP
    ctx->pc = 0x3a0c18u;
}
