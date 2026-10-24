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

// Function: func_0038F000
// Address: 0x38f000 - 0x38f020
void func_0038F000_0x38f000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038F000_0x38f000");
#endif

    switch (ctx->pc) {
        case 0x38f010u: goto label_38f010;
        default: break;
    }

    ctx->pc = 0x38f000u;

    // 0x38f000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38f000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38f004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38f004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38f008: 0xc0e4bc0  jal         func_392F00
    ctx->pc = 0x38F008u;
    SET_GPR_U32(ctx, 31, 0x38F010u);
    ctx->pc = 0x392F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392F00u, 0x38F008u, 0x38F010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F010u;
label_38f010:
    // 0x38f010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38f010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f014: 0x3e00008  jr          $ra
    ctx->pc = 0x38F014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F014u;
        // 0x38f018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F01Cu;
    // 0x38f01c: 0x0  nop
    ctx->pc = 0x38f01cu;
    // NOP
    ctx->pc = 0x38f020u;
}
