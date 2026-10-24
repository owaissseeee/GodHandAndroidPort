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

// Function: cCoreSave_getGameDifficulty
// Address: 0x1fa678 - 0x1fa690
void cCoreSave_getGameDifficulty_0x1fa678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getGameDifficulty_0x1fa678");
#endif

    ctx->pc = 0x1fa678u;

    // 0x1fa678: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fa678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa67c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FA67Cu;
    {
        const bool branch_taken_0x1fa67c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA67Cu;
        // 0x1fa680: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa67c) {
            ctx->pc = 0x1FA688u;
            goto label_1fa688;
        }
    }
    ctx->pc = 0x1FA684u;
    // 0x1fa684: 0x8082001f  lb          $v0, 0x1F($a0)
    ctx->pc = 0x1fa684u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 31)));
label_1fa688:
    // 0x1fa688: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA690u;
}
