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

// Function: func_0031DB50
// Address: 0x31db50 - 0x31db70
void func_0031DB50_0x31db50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031DB50_0x31db50");
#endif

    ctx->pc = 0x31db50u;

    // 0x31db50: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x31db50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x31db54: 0x8c625bc8  lw          $v0, 0x5BC8($v1)
    ctx->pc = 0x31db54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x755BC8u));
    // 0x31db58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31DB58u;
    {
        const bool branch_taken_0x31db58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB58u;
        // 0x31db5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db58) {
            ctx->pc = 0x31DB68u;
            goto label_31db68;
        }
    }
    ctx->pc = 0x31DB60u;
    // 0x31db60: 0x80c76a8  j           func_31DAA0
    ctx->pc = 0x31DB60u;
    ctx->pc = 0x31DB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DB60u;
    // 0x31db64: 0xac625bc8  sw          $v0, 0x5BC8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 23496), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DAA0u, 0x31DB60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x31DB68u;
label_31db68:
    // 0x31db68: 0x3e00008  jr          $ra
    ctx->pc = 0x31DB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DB70u;
}
