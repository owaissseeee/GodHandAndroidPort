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

// Function: func_002BF518
// Address: 0x2bf518 - 0x2bf540
void func_002BF518_0x2bf518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BF518_0x2bf518");
#endif

    ctx->pc = 0x2bf518u;

    // 0x2bf518: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2bf518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2bf51c: 0x8c627a88  lw          $v0, 0x7A88($v1)
    ctx->pc = 0x2bf51cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A88u));
    // 0x2bf520: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF520u;
    {
        const bool branch_taken_0x2bf520 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BF524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF520u;
        // 0x2bf524: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf520) {
            ctx->pc = 0x2BF538u;
            goto label_2bf538;
        }
    }
    ctx->pc = 0x2BF528u;
    // 0x2bf528: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2bf528u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf52c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2bf52cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bf530: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x2bf530u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf534: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2bf534u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_2bf538:
    // 0x2bf538: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF540u;
}
