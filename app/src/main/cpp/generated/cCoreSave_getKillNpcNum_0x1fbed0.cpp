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

// Function: cCoreSave_getKillNpcNum
// Address: 0x1fbed0 - 0x1fbee8
void cCoreSave_getKillNpcNum_0x1fbed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getKillNpcNum_0x1fbed0");
#endif

    ctx->pc = 0x1fbed0u;

    // 0x1fbed0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fbed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fbed4: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FBED4u;
    {
        const bool branch_taken_0x1fbed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBED4u;
        // 0x1fbed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbed4) {
            ctx->pc = 0x1FBEE0u;
            goto label_1fbee0;
        }
    }
    ctx->pc = 0x1FBEDCu;
    // 0x1fbedc: 0x84820096  lh          $v0, 0x96($a0)
    ctx->pc = 0x1fbedcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
label_1fbee0:
    // 0x1fbee0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBEE8u;
}
