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

// Function: func_0038F548
// Address: 0x38f548 - 0x38f570
void func_0038F548_0x38f548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038F548_0x38f548");
#endif

    ctx->pc = 0x38f548u;

    // 0x38f548: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38F548u;
    {
        const bool branch_taken_0x38f548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f548) {
            ctx->pc = 0x38F564u;
            goto label_38f564;
        }
    }
    ctx->pc = 0x38F550u;
    // 0x38f550: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x38f550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38f554: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38F554u;
    {
        const bool branch_taken_0x38f554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38f554) {
            ctx->pc = 0x38F564u;
            goto label_38f564;
        }
    }
    ctx->pc = 0x38F55Cu;
    // 0x38f55c: 0x80e9f30  j           func_3A7CC0
    ctx->pc = 0x38F55Cu;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x38F55Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x38F564u;
label_38f564:
    // 0x38f564: 0x3e00008  jr          $ra
    ctx->pc = 0x38F564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F56Cu;
    // 0x38f56c: 0x0  nop
    ctx->pc = 0x38f56cu;
    // NOP
    ctx->pc = 0x38f570u;
}
