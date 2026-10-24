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

// Function: FreeFieldObject_1267F8
// Address: 0x1267f8 - 0x126820
void FreeFieldObject_1267F8_0x1267f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreeFieldObject_1267F8_0x1267f8");
#endif

    switch (ctx->pc) {
        case 0x126814u: goto label_126814;
        default: break;
    }

    ctx->pc = 0x1267f8u;

    // 0x1267f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1267f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1267fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1267fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126800: 0x8c84165c  lw          $a0, 0x165C($a0)
    ctx->pc = 0x126800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5724)));
    // 0x126804: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x126804u;
    {
        const bool branch_taken_0x126804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x126808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126804u;
        // 0x126808: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126804) {
            ctx->pc = 0x126818u;
            goto label_126818;
        }
    }
    ctx->pc = 0x12680Cu;
    // 0x12680c: 0xc07dbb8  jal         func_1F6EE0
    ctx->pc = 0x12680Cu;
    SET_GPR_U32(ctx, 31, 0x126814u);
    ctx->pc = 0x1F6EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6EE0u, 0x12680Cu, 0x126814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126814u;
label_126814:
    // 0x126814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126818:
    // 0x126818: 0x3e00008  jr          $ra
    ctx->pc = 0x126818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126818u;
        // 0x12681c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126820u;
}
