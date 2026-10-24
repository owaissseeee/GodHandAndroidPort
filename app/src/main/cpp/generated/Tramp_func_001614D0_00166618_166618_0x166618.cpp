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

// Function: Tramp_func_001614D0_00166618_166618
// Address: 0x166618 - 0x166638
void Tramp_func_001614D0_00166618_166618_0x166618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001614D0_00166618_166618_0x166618");
#endif

    switch (ctx->pc) {
        case 0x166628u: goto label_166628;
        default: break;
    }

    ctx->pc = 0x166618u;

    // 0x166618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x166618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16661c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16661cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166620: 0xc058534  jal         func_1614D0
    ctx->pc = 0x166620u;
    SET_GPR_U32(ctx, 31, 0x166628u);
    ctx->pc = 0x1614D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1614D0u, 0x166620u, 0x166628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166628u;
label_166628:
    // 0x166628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16662c: 0x3e00008  jr          $ra
    ctx->pc = 0x16662Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16662Cu;
        // 0x166630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16662Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166634u;
    // 0x166634: 0x0  nop
    ctx->pc = 0x166634u;
    // NOP
    ctx->pc = 0x166638u;
}
