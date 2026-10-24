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

// Function: func_00393720
// Address: 0x393720 - 0x393740
void func_00393720_0x393720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00393720_0x393720");
#endif

    switch (ctx->pc) {
        case 0x393730u: goto label_393730;
        default: break;
    }

    ctx->pc = 0x393720u;

    // 0x393720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x393720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x393724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x393724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x393728: 0xc0e9908  jal         func_3A6420
    ctx->pc = 0x393728u;
    SET_GPR_U32(ctx, 31, 0x393730u);
    ctx->pc = 0x39372Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393728u;
    // 0x39372c: 0x8c840058  lw          $a0, 0x58($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6420u, 0x393728u, 0x393730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393730u;
label_393730:
    // 0x393730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x393730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x393734: 0x3e00008  jr          $ra
    ctx->pc = 0x393734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393734u;
        // 0x393738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39373Cu;
    // 0x39373c: 0x0  nop
    ctx->pc = 0x39373cu;
    // NOP
    ctx->pc = 0x393740u;
}
