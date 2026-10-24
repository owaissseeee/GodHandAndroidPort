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

// Function: func_00328488
// Address: 0x328488 - 0x3284a0
void func_00328488_0x328488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328488_0x328488");
#endif

    ctx->pc = 0x328488u;

    // 0x328488: 0x4a20003  bltzl       $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x328488u;
    {
        const bool branch_taken_0x328488 = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x328488) {
            ctx->pc = 0x32848Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328488u;
            // 0x32848c: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328498u;
            goto label_328498;
        }
    }
    ctx->pc = 0x328490u;
    // 0x328490: 0x3e00008  jr          $ra
    ctx->pc = 0x328490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328490u;
        // 0x328494: 0xac850030  sw          $a1, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328498u;
label_328498:
    // 0x328498: 0x3e00008  jr          $ra
    ctx->pc = 0x328498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328498u;
        // 0x32849c: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3284A0u;
}
