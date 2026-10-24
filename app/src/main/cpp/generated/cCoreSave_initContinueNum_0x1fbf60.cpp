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

// Function: cCoreSave_initContinueNum
// Address: 0x1fbf60 - 0x1fbf78
void cCoreSave_initContinueNum_0x1fbf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_initContinueNum_0x1fbf60");
#endif

    ctx->pc = 0x1fbf60u;

    // 0x1fbf60: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fbf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fbf64: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FBF64u;
    {
        const bool branch_taken_0x1fbf64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbf64) {
            ctx->pc = 0x1FBF68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBF64u;
            // 0x1fbf68: 0xa4800012  sh          $zero, 0x12($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBF6Cu;
            goto label_1fbf6c;
        }
    }
    ctx->pc = 0x1FBF6Cu;
label_1fbf6c:
    // 0x1fbf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBF74u;
    // 0x1fbf74: 0x0  nop
    ctx->pc = 0x1fbf74u;
    // NOP
    ctx->pc = 0x1fbf78u;
}
