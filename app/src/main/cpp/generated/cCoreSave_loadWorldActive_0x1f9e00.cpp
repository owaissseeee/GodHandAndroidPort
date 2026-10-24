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

// Function: cCoreSave_loadWorldActive
// Address: 0x1f9e00 - 0x1f9e28
void cCoreSave_loadWorldActive_0x1f9e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_loadWorldActive_0x1f9e00");
#endif

    ctx->pc = 0x1f9e00u;

    // 0x1f9e00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f9e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9e04: 0x8c430174  lw          $v1, 0x174($v0)
    ctx->pc = 0x1f9e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x1f9e08: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9E08u;
    {
        const bool branch_taken_0x1f9e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E08u;
        // 0x1f9e0c: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e08) {
            ctx->pc = 0x1F9E20u;
            goto label_1f9e20;
        }
    }
    ctx->pc = 0x1F9E10u;
    // 0x1f9e10: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1f9e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1f9e14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9e18: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E18u;
        // 0x1f9e1c: 0xa06285f8  sb          $v0, -0x7A08($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294936056), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9E20u;
label_1f9e20:
    // 0x1f9e20: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E20u;
        // 0x1f9e24: 0xa04085f8  sb          $zero, -0x7A08($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294936056), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9E28u;
}
