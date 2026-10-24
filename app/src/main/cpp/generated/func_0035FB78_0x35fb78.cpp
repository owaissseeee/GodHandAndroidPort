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

// Function: func_0035FB78
// Address: 0x35fb78 - 0x35fb88
void func_0035FB78_0x35fb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035FB78_0x35fb78");
#endif

    ctx->pc = 0x35fb78u;

    // 0x35fb78: 0x2882181f  slti        $v0, $a0, 0x181F
    ctx->pc = 0x35fb78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6175) ? 1 : 0);
    // 0x35fb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x35FB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FB7Cu;
        // 0x35fb80: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FB84u;
    // 0x35fb84: 0x0  nop
    ctx->pc = 0x35fb84u;
    // NOP
    ctx->pc = 0x35fb88u;
}
