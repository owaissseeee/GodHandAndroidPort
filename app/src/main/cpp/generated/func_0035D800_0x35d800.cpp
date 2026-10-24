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

// Function: func_0035D800
// Address: 0x35d800 - 0x35d828
void func_0035D800_0x35d800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035D800_0x35d800");
#endif

    ctx->pc = 0x35d800u;

    // 0x35d800: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x35d800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35d804: 0x2843ffff  slti        $v1, $v0, -0x1
    ctx->pc = 0x35d804u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x35d808: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x35d808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x35d80c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35D80Cu;
    {
        const bool branch_taken_0x35d80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D80Cu;
        // 0x35d810: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d80c) {
            ctx->pc = 0x35D820u;
            goto label_35d820;
        }
    }
    ctx->pc = 0x35D814u;
    // 0x35d814: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x35D814u;
    {
        const bool branch_taken_0x35d814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D814u;
        // 0x35d818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d814) {
            ctx->pc = 0x35D820u;
            goto label_35d820;
        }
    }
    ctx->pc = 0x35D81Cu;
    // 0x35d81c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35d820:
    // 0x35d820: 0x3e00008  jr          $ra
    ctx->pc = 0x35D820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D828u;
}
