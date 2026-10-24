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

// Function: Obj35D0_IsField0Zero_D7A8
// Address: 0x35d7a8 - 0x35d7b8
void Obj35D0_IsField0Zero_D7A8_0x35d7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj35D0_IsField0Zero_D7A8_0x35d7a8");
#endif

    ctx->pc = 0x35d7a8u;

    // 0x35d7a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x35d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35d7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x35D7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D7ACu;
        // 0x35d7b0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D7B4u;
    // 0x35d7b4: 0x0  nop
    ctx->pc = 0x35d7b4u;
    // NOP
    ctx->pc = 0x35d7b8u;
}
