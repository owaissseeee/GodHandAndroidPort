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

// Function: func_00195E58
// Address: 0x195e58 - 0x195e78
void func_00195E58_0x195e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00195E58_0x195e58");
#endif

    switch (ctx->pc) {
        case 0x195e68u: goto label_195e68;
        default: break;
    }

    ctx->pc = 0x195e58u;

    // 0x195e58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195e5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195e60: 0xc070a74  jal         func_1C29D0
    ctx->pc = 0x195E60u;
    SET_GPR_U32(ctx, 31, 0x195E68u);
    ctx->pc = 0x1C29D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C29D0u, 0x195E60u, 0x195E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195E68u;
label_195e68:
    // 0x195e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x195E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E6Cu;
        // 0x195e70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195E74u;
    // 0x195e74: 0x0  nop
    ctx->pc = 0x195e74u;
    // NOP
    ctx->pc = 0x195e78u;
}
