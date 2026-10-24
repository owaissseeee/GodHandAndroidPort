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

// Function: cCoreSave_setPaper
// Address: 0x1fc120 - 0x1fc138
void cCoreSave_setPaper_0x1fc120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setPaper_0x1fc120");
#endif

    ctx->pc = 0x1fc120u;

    // 0x1fc120: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc124: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC124u;
    {
        const bool branch_taken_0x1fc124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC124u;
        // 0x1fc128: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc124) {
            ctx->pc = 0x1FC130u;
            goto label_1fc130;
        }
    }
    ctx->pc = 0x1FC12Cu;
    // 0x1fc12c: 0xa0820157  sb          $v0, 0x157($a0)
    ctx->pc = 0x1fc12cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 343), (uint8_t)GPR_U32(ctx, 2));
label_1fc130:
    // 0x1fc130: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC138u;
}
