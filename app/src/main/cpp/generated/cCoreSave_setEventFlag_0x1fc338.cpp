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

// Function: cCoreSave_setEventFlag
// Address: 0x1fc338 - 0x1fc360
void cCoreSave_setEventFlag_0x1fc338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setEventFlag_0x1fc338");
#endif

    ctx->pc = 0x1fc338u;

    // 0x1fc338: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc33c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC33Cu;
    {
        const bool branch_taken_0x1fc33c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC33Cu;
        // 0x1fc340: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc33c) {
            ctx->pc = 0x1FC354u;
            goto label_1fc354;
        }
    }
    ctx->pc = 0x1FC344u;
    // 0x1fc344: 0x8c830b90  lw          $v1, 0xB90($a0)
    ctx->pc = 0x1fc344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2960)));
    // 0x1fc348: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x1fc348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1fc34c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fc34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fc350: 0xac830b90  sw          $v1, 0xB90($a0)
    ctx->pc = 0x1fc350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2960), GPR_U32(ctx, 3));
label_1fc354:
    // 0x1fc354: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC35Cu;
    // 0x1fc35c: 0x0  nop
    ctx->pc = 0x1fc35cu;
    // NOP
    ctx->pc = 0x1fc360u;
}
