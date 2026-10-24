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

// Function: func_003492E8
// Address: 0x3492e8 - 0x349308
void func_003492E8_0x3492e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003492E8_0x3492e8");
#endif

    switch (ctx->pc) {
        case 0x3492f8u: goto label_3492f8;
        default: break;
    }

    ctx->pc = 0x3492e8u;

    // 0x3492e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3492e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3492ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3492ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3492f0: 0xc0d14ac  jal         func_3452B0
    ctx->pc = 0x3492F0u;
    SET_GPR_U32(ctx, 31, 0x3492F8u);
    ctx->pc = 0x3452B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3452B0u, 0x3492F0u, 0x3492F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3492F8u;
label_3492f8:
    // 0x3492f8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3492f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3492fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3492fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349300: 0x3e00008  jr          $ra
    ctx->pc = 0x349300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349300u;
        // 0x349304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349308u;
}
