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

// Function: func_0038C0A8
// Address: 0x38c0a8 - 0x38c0b8
void func_0038C0A8_0x38c0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038C0A8_0x38c0a8");
#endif

    ctx->pc = 0x38c0a8u;

    // 0x38c0a8: 0x84820018  lh          $v0, 0x18($a0)
    ctx->pc = 0x38c0a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38c0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x38C0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C0ACu;
        // 0x38c0b0: 0xa4850018  sh          $a1, 0x18($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C0B4u;
    // 0x38c0b4: 0x0  nop
    ctx->pc = 0x38c0b4u;
    // NOP
    ctx->pc = 0x38c0b8u;
}
