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

// Function: func_00320240
// Address: 0x320240 - 0x320260
void func_00320240_0x320240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00320240_0x320240");
#endif

    switch (ctx->pc) {
        case 0x320250u: goto label_320250;
        default: break;
    }

    ctx->pc = 0x320240u;

    // 0x320240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x320244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x320248: 0xc0c7b84  jal         func_31EE10
    ctx->pc = 0x320248u;
    SET_GPR_U32(ctx, 31, 0x320250u);
    ctx->pc = 0x31EE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EE10u, 0x320248u, 0x320250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320250u;
label_320250:
    // 0x320250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320254: 0x3e00008  jr          $ra
    ctx->pc = 0x320254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320254u;
        // 0x320258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32025Cu;
    // 0x32025c: 0x0  nop
    ctx->pc = 0x32025cu;
    // NOP
    ctx->pc = 0x320260u;
}
