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

// Function: func_002BA1B0
// Address: 0x2ba1b0 - 0x2ba1c8
void func_002BA1B0_0x2ba1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BA1B0_0x2ba1b0");
#endif

    ctx->pc = 0x2ba1b0u;

    // 0x2ba1b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ba1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba1b4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2ba1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2ba1b8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2ba1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2ba1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1BCu;
        // 0x2ba1c0: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA1C4u;
    // 0x2ba1c4: 0x0  nop
    ctx->pc = 0x2ba1c4u;
    // NOP
    ctx->pc = 0x2ba1c8u;
}
