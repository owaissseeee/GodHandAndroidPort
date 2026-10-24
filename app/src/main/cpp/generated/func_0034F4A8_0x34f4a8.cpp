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

// Function: func_0034F4A8
// Address: 0x34f4a8 - 0x34f4c0
void func_0034F4A8_0x34f4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034F4A8_0x34f4a8");
#endif

    ctx->pc = 0x34f4a8u;

    // 0x34f4a8: 0x8c831f7c  lw          $v1, 0x1F7C($a0)
    ctx->pc = 0x34f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8060)));
    // 0x34f4ac: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x34f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x34f4b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34f4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x34F4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F4B4u;
        // 0x34f4b8: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F4BCu;
    // 0x34f4bc: 0x0  nop
    ctx->pc = 0x34f4bcu;
    // NOP
    ctx->pc = 0x34f4c0u;
}
