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

// Function: func_001CF140
// Address: 0x1cf140 - 0x1cf160
void func_001CF140_0x1cf140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CF140_0x1cf140");
#endif

    switch (ctx->pc) {
        case 0x1cf154u: goto label_1cf154;
        default: break;
    }

    ctx->pc = 0x1cf140u;

    // 0x1cf140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf144: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cf144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf14c: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x1CF14Cu;
    SET_GPR_U32(ctx, 31, 0x1CF154u);
    ctx->pc = 0x1CF150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF14Cu;
    // 0x1cf150: 0xa0820531  sb          $v0, 0x531($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 1329), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x1CF14Cu, 0x1CF154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF154u;
label_1cf154:
    // 0x1cf154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf158: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF158u;
        // 0x1cf15c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF160u;
}
