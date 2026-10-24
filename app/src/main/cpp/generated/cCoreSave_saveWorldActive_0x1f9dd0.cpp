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

// Function: cCoreSave_saveWorldActive
// Address: 0x1f9dd0 - 0x1f9e00
void cCoreSave_saveWorldActive_0x1f9dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_saveWorldActive_0x1f9dd0");
#endif

    ctx->pc = 0x1f9dd0u;

    // 0x1f9dd0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1f9dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9dd4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9DD4u;
    {
        const bool branch_taken_0x1f9dd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DD4u;
        // 0x1f9dd8: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9dd4) {
            ctx->pc = 0x1F9DF4u;
            goto label_1f9df4;
        }
    }
    ctx->pc = 0x1F9DDCu;
    // 0x1f9ddc: 0x904385f8  lbu         $v1, -0x7A08($v0)
    ctx->pc = 0x1f9ddcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294936056)));
    // 0x1f9de0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9DE0u;
    {
        const bool branch_taken_0x1f9de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9de0) {
            ctx->pc = 0x1F9DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9DE0u;
            // 0x1f9de4: 0xac800174  sw          $zero, 0x174($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9DF4u;
            goto label_1f9df4;
        }
    }
    ctx->pc = 0x1F9DE8u;
    // 0x1f9de8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9dec: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DECu;
        // 0x1f9df0: 0xac820174  sw          $v0, 0x174($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9DF4u;
label_1f9df4:
    // 0x1f9df4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9DFCu;
    // 0x1f9dfc: 0x0  nop
    ctx->pc = 0x1f9dfcu;
    // NOP
    ctx->pc = 0x1f9e00u;
}
