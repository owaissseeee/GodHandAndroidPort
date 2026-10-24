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

// Function: cCoreSave_getVital
// Address: 0x1fac68 - 0x1fac80
void cCoreSave_getVital_0x1fac68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getVital_0x1fac68");
#endif

    ctx->pc = 0x1fac68u;

    // 0x1fac68: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fac68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fac6c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FAC6Cu;
    {
        const bool branch_taken_0x1fac6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC6Cu;
        // 0x1fac70: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac6c) {
            ctx->pc = 0x1FAC78u;
            goto label_1fac78;
        }
    }
    ctx->pc = 0x1FAC74u;
    // 0x1fac74: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x1fac74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_1fac78:
    // 0x1fac78: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAC80u;
}
