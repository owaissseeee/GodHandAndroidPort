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

// Function: cCoreSave_saveGlobalToggle
// Address: 0x1f9e90 - 0x1f9eb0
void cCoreSave_saveGlobalToggle_0x1f9e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_saveGlobalToggle_0x1f9e90");
#endif

    ctx->pc = 0x1f9e90u;

    // 0x1f9e90: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1f9e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9e94: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9E94u;
    {
        const bool branch_taken_0x1f9e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E94u;
        // 0x1f9e98: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e94) {
            ctx->pc = 0x1F9EA4u;
            goto label_1f9ea4;
        }
    }
    ctx->pc = 0x1F9E9Cu;
    // 0x1f9e9c: 0x8c437a0c  lw          $v1, 0x7A0C($v0)
    ctx->pc = 0x1f9e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31244)));
    // 0x1f9ea0: 0xac830178  sw          $v1, 0x178($a0)
    ctx->pc = 0x1f9ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 376), GPR_U32(ctx, 3));
label_1f9ea4:
    // 0x1f9ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9EACu;
    // 0x1f9eac: 0x0  nop
    ctx->pc = 0x1f9eacu;
    // NOP
    ctx->pc = 0x1f9eb0u;
}
