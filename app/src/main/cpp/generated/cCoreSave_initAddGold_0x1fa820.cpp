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

// Function: cCoreSave_initAddGold
// Address: 0x1fa820 - 0x1fa838
void cCoreSave_initAddGold_0x1fa820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_initAddGold_0x1fa820");
#endif

    ctx->pc = 0x1fa820u;

    // 0x1fa820: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fa820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa824: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FA824u;
    {
        const bool branch_taken_0x1fa824 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa824) {
            ctx->pc = 0x1FA828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA824u;
            // 0x1fa828: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA82Cu;
            goto label_1fa82c;
        }
    }
    ctx->pc = 0x1FA82Cu;
label_1fa82c:
    // 0x1fa82c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA834u;
    // 0x1fa834: 0x0  nop
    ctx->pc = 0x1fa834u;
    // NOP
    ctx->pc = 0x1fa838u;
}
