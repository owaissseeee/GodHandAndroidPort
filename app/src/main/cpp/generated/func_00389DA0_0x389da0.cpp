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

// Function: func_00389DA0
// Address: 0x389da0 - 0x389dc0
void func_00389DA0_0x389da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00389DA0_0x389da0");
#endif

    switch (ctx->pc) {
        case 0x389db0u: goto label_389db0;
        default: break;
    }

    ctx->pc = 0x389da0u;

    // 0x389da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x389da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x389da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x389da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x389da8: 0xc0e1eae  jal         func_387AB8
    ctx->pc = 0x389DA8u;
    SET_GPR_U32(ctx, 31, 0x389DB0u);
    ctx->pc = 0x387AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387AB8u, 0x389DA8u, 0x389DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389DB0u;
label_389db0:
    // 0x389db0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x389db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389db4: 0x3e00008  jr          $ra
    ctx->pc = 0x389DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389DB4u;
        // 0x389db8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389DBCu;
    // 0x389dbc: 0x0  nop
    ctx->pc = 0x389dbcu;
    // NOP
    ctx->pc = 0x389dc0u;
}
