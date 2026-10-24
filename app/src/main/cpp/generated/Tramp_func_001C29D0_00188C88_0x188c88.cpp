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

// Function: Tramp_func_001C29D0_00188C88
// Address: 0x188c88 - 0x188ca8
void Tramp_func_001C29D0_00188C88_0x188c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001C29D0_00188C88_0x188c88");
#endif

    switch (ctx->pc) {
        case 0x188c98u: goto label_188c98;
        default: break;
    }

    ctx->pc = 0x188c88u;

    // 0x188c88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188c8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188c90: 0xc070a74  jal         func_1C29D0
    ctx->pc = 0x188C90u;
    SET_GPR_U32(ctx, 31, 0x188C98u);
    ctx->pc = 0x1C29D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C29D0u, 0x188C90u, 0x188C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188C98u;
label_188c98:
    // 0x188c98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x188C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C9Cu;
        // 0x188ca0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188CA4u;
    // 0x188ca4: 0x0  nop
    ctx->pc = 0x188ca4u;
    // NOP
    ctx->pc = 0x188ca8u;
}
