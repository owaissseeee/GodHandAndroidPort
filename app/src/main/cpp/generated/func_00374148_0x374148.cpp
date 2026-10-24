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

// Function: func_00374148
// Address: 0x374148 - 0x374170
void func_00374148_0x374148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00374148_0x374148");
#endif

    switch (ctx->pc) {
        case 0x374164u: goto label_374164;
        default: break;
    }

    ctx->pc = 0x374148u;

    // 0x374148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37414c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37414cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374150: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x374150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x374154: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x374154u;
    {
        const bool branch_taken_0x374154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x374158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374154u;
        // 0x374158: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374154) {
            ctx->pc = 0x374168u;
            goto label_374168;
        }
    }
    ctx->pc = 0x37415Cu;
    // 0x37415c: 0xc0cdb42  jal         func_336D08
    ctx->pc = 0x37415Cu;
    SET_GPR_U32(ctx, 31, 0x374164u);
    ctx->pc = 0x336D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D08u, 0x37415Cu, 0x374164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374164u;
label_374164:
    // 0x374164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_374168:
    // 0x374168: 0x3e00008  jr          $ra
    ctx->pc = 0x374168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374168u;
        // 0x37416c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374170u;
}
