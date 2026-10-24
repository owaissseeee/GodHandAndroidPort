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

// Function: cCoreSave_clearPaper
// Address: 0x1fc138 - 0x1fc150
void cCoreSave_clearPaper_0x1fc138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_clearPaper_0x1fc138");
#endif

    ctx->pc = 0x1fc138u;

    // 0x1fc138: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc13c: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FC13Cu;
    {
        const bool branch_taken_0x1fc13c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc13c) {
            ctx->pc = 0x1FC140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC13Cu;
            // 0x1fc140: 0xa0800157  sb          $zero, 0x157($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 343), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC144u;
            goto label_1fc144;
        }
    }
    ctx->pc = 0x1FC144u;
label_1fc144:
    // 0x1fc144: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC14Cu;
    // 0x1fc14c: 0x0  nop
    ctx->pc = 0x1fc14cu;
    // NOP
    ctx->pc = 0x1fc150u;
}
