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

// Function: cCoreSave_loadGlobalToggle
// Address: 0x1f9eb0 - 0x1f9ed0
void cCoreSave_loadGlobalToggle_0x1f9eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_loadGlobalToggle_0x1f9eb0");
#endif

    ctx->pc = 0x1f9eb0u;

    // 0x1f9eb0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1f9eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9eb4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9EB4u;
    {
        const bool branch_taken_0x1f9eb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EB4u;
        // 0x1f9eb8: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9eb4) {
            ctx->pc = 0x1F9EC4u;
            goto label_1f9ec4;
        }
    }
    ctx->pc = 0x1F9EBCu;
    // 0x1f9ebc: 0x8c830178  lw          $v1, 0x178($a0)
    ctx->pc = 0x1f9ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x1f9ec0: 0xac437a0c  sw          $v1, 0x7A0C($v0)
    ctx->pc = 0x1f9ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31244), GPR_U32(ctx, 3));
label_1f9ec4:
    // 0x1f9ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9ECCu;
    // 0x1f9ecc: 0x0  nop
    ctx->pc = 0x1f9eccu;
    // NOP
    ctx->pc = 0x1f9ed0u;
}
