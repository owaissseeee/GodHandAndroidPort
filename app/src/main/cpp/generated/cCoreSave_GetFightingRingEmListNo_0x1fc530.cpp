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

// Function: cCoreSave_GetFightingRingEmListNo
// Address: 0x1fc530 - 0x1fc548
void cCoreSave_GetFightingRingEmListNo_0x1fc530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_GetFightingRingEmListNo_0x1fc530");
#endif

    ctx->pc = 0x1fc530u;

    // 0x1fc530: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc534: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC534u;
    {
        const bool branch_taken_0x1fc534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC534u;
        // 0x1fc538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc534) {
            ctx->pc = 0x1FC540u;
            goto label_1fc540;
        }
    }
    ctx->pc = 0x1FC53Cu;
    // 0x1fc53c: 0x8c820ba8  lw          $v0, 0xBA8($a0)
    ctx->pc = 0x1fc53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2984)));
label_1fc540:
    // 0x1fc540: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC548u;
}
