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

// Function: Tramp_func_0014EFA8_001866A0
// Address: 0x1866a0 - 0x1866d8
void Tramp_func_0014EFA8_001866A0_0x1866a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_0014EFA8_001866A0_0x1866a0");
#endif

    switch (ctx->pc) {
        case 0x1866b0u: goto label_1866b0;
        default: break;
    }

    ctx->pc = 0x1866a0u;

    // 0x1866a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1866a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1866a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1866a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1866a8: 0xc053bea  jal         func_14EFA8
    ctx->pc = 0x1866A8u;
    SET_GPR_U32(ctx, 31, 0x1866B0u);
    ctx->pc = 0x14EFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EFA8u, 0x1866A8u, 0x1866B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1866B0u;
label_1866b0:
    // 0x1866b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1866b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1866b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1866B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1866B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866B4u;
        // 0x1866b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1866B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1866BCu;
    // 0x1866bc: 0x0  nop
    ctx->pc = 0x1866bcu;
    // NOP
    // 0x1866c0: 0x0  nop
    ctx->pc = 0x1866c0u;
    // NOP
    // 0x1866c4: 0x0  nop
    ctx->pc = 0x1866c4u;
    // NOP
    // 0x1866c8: 0x0  nop
    ctx->pc = 0x1866c8u;
    // NOP
    // 0x1866cc: 0x0  nop
    ctx->pc = 0x1866ccu;
    // NOP
    // 0x1866d0: 0x0  nop
    ctx->pc = 0x1866d0u;
    // NOP
    // 0x1866d4: 0x0  nop
    ctx->pc = 0x1866d4u;
    // NOP
    ctx->pc = 0x1866d8u;
}
