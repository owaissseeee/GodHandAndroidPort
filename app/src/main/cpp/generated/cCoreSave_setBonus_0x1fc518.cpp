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

// Function: cCoreSave_setBonus
// Address: 0x1fc518 - 0x1fc530
void cCoreSave_setBonus_0x1fc518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setBonus_0x1fc518");
#endif

    ctx->pc = 0x1fc518u;

    // 0x1fc518: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc51c: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FC51Cu;
    {
        const bool branch_taken_0x1fc51c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc51c) {
            ctx->pc = 0x1FC520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC51Cu;
            // 0x1fc520: 0xac850ba8  sw          $a1, 0xBA8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 2984), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC524u;
            goto label_1fc524;
        }
    }
    ctx->pc = 0x1FC524u;
label_1fc524:
    // 0x1fc524: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC52Cu;
    // 0x1fc52c: 0x0  nop
    ctx->pc = 0x1fc52cu;
    // NOP
    ctx->pc = 0x1fc530u;
}
