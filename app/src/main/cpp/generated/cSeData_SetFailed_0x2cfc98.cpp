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

// Function: cSeData_SetFailed
// Address: 0x2cfc98 - 0x2cfcb0
void cSeData_SetFailed_0x2cfc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSeData_SetFailed_0x2cfc98");
#endif

    ctx->pc = 0x2cfc98u;

    // 0x2cfc98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cfc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cfc9c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CFC9Cu;
    {
        const bool branch_taken_0x2cfc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFC9Cu;
        // 0x2cfca0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfc9c) {
            ctx->pc = 0x2CFCA8u;
            goto label_2cfca8;
        }
    }
    ctx->pc = 0x2CFCA4u;
    // 0x2cfca4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2cfca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2cfca8:
    // 0x2cfca8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFCB0u;
}
