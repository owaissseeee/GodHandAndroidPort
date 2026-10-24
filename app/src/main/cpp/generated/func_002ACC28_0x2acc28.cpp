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

// Function: func_002ACC28
// Address: 0x2acc28 - 0x2acc50
void func_002ACC28_0x2acc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002ACC28_0x2acc28");
#endif

    ctx->pc = 0x2acc28u;

    // 0x2acc28: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ACC28u;
    {
        const bool branch_taken_0x2acc28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC28u;
        // 0x2acc2c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acc28) {
            ctx->pc = 0x2ACC3Cu;
            goto label_2acc3c;
        }
    }
    ctx->pc = 0x2ACC30u;
    // 0x2acc30: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2acc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2acc34: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC34u;
        // 0x2acc38: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACC3Cu;
label_2acc3c:
    // 0x2acc3c: 0x51827  nor         $v1, $zero, $a1
    ctx->pc = 0x2acc3cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x2acc40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2acc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2acc44: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC44u;
        // 0x2acc48: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACC4Cu;
    // 0x2acc4c: 0x0  nop
    ctx->pc = 0x2acc4cu;
    // NOP
    ctx->pc = 0x2acc50u;
}
