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

// Function: cCoreSave_clearClearStage
// Address: 0x1fc090 - 0x1fc0a8
void cCoreSave_clearClearStage_0x1fc090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_clearClearStage_0x1fc090");
#endif

    ctx->pc = 0x1fc090u;

    // 0x1fc090: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc094: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FC094u;
    {
        const bool branch_taken_0x1fc094 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc094) {
            ctx->pc = 0x1FC098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC094u;
            // 0x1fc098: 0xac8000a4  sw          $zero, 0xA4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC09Cu;
            goto label_1fc09c;
        }
    }
    ctx->pc = 0x1FC09Cu;
label_1fc09c:
    // 0x1fc09c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC0A4u;
    // 0x1fc0a4: 0x0  nop
    ctx->pc = 0x1fc0a4u;
    // NOP
    ctx->pc = 0x1fc0a8u;
}
