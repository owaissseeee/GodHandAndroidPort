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

// Function: cCoreSave_setGameDifficulty
// Address: 0x1fa658 - 0x1fa678
void cCoreSave_setGameDifficulty_0x1fa658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setGameDifficulty_0x1fa658");
#endif

    ctx->pc = 0x1fa658u;

    // 0x1fa658: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fa658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa65c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA65Cu;
    {
        const bool branch_taken_0x1fa65c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA65Cu;
        // 0x1fa660: 0x2ca20003  sltiu       $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa65c) {
            ctx->pc = 0x1FA66Cu;
            goto label_1fa66c;
        }
    }
    ctx->pc = 0x1FA664u;
    // 0x1fa664: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FA664u;
    {
        const bool branch_taken_0x1fa664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa664) {
            ctx->pc = 0x1FA668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA664u;
            // 0x1fa668: 0xa085001f  sb          $a1, 0x1F($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA66Cu;
            goto label_1fa66c;
        }
    }
    ctx->pc = 0x1FA66Cu;
label_1fa66c:
    // 0x1fa66c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA674u;
    // 0x1fa674: 0x0  nop
    ctx->pc = 0x1fa674u;
    // NOP
    ctx->pc = 0x1fa678u;
}
