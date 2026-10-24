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

// Function: cCoreSave_getKeyNum
// Address: 0x1faa00 - 0x1faa18
void cCoreSave_getKeyNum_0x1faa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getKeyNum_0x1faa00");
#endif

    ctx->pc = 0x1faa00u;

    // 0x1faa00: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1faa00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1faa04: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FAA04u;
    {
        const bool branch_taken_0x1faa04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA04u;
        // 0x1faa08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa04) {
            ctx->pc = 0x1FAA10u;
            goto label_1faa10;
        }
    }
    ctx->pc = 0x1FAA0Cu;
    // 0x1faa0c: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x1faa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_1faa10:
    // 0x1faa10: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAA18u;
}
