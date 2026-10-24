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

// Function: cCoreSave_setGold
// Address: 0x1fa6f8 - 0x1fa710
void cCoreSave_setGold_0x1fa6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setGold_0x1fa6f8");
#endif

    ctx->pc = 0x1fa6f8u;

    // 0x1fa6f8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fa6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa6fc: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FA6FCu;
    {
        const bool branch_taken_0x1fa6fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa6fc) {
            ctx->pc = 0x1FA700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA6FCu;
            // 0x1fa700: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA704u;
            goto label_1fa704;
        }
    }
    ctx->pc = 0x1FA704u;
label_1fa704:
    // 0x1fa704: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA70Cu;
    // 0x1fa70c: 0x0  nop
    ctx->pc = 0x1fa70cu;
    // NOP
    ctx->pc = 0x1fa710u;
}
