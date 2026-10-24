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

// Function: func_0033C7A0
// Address: 0x33c7a0 - 0x33c7c0
void func_0033C7A0_0x33c7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033C7A0_0x33c7a0");
#endif

    ctx->pc = 0x33c7a0u;

    // 0x33c7a0: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x33c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x33c7a4: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x33c7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x33c7a8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x33c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33c7ac: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33c7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33c7b0: 0xac82008c  sw          $v0, 0x8C($a0)
    ctx->pc = 0x33c7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 2));
    // 0x33c7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x33C7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C7B4u;
        // 0x33c7b8: 0xac830088  sw          $v1, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C7BCu;
    // 0x33c7bc: 0x0  nop
    ctx->pc = 0x33c7bcu;
    // NOP
    ctx->pc = 0x33c7c0u;
}
