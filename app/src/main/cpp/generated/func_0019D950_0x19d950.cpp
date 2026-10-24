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

// Function: func_0019D950
// Address: 0x19d950 - 0x19d970
void func_0019D950_0x19d950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019D950_0x19d950");
#endif

    switch (ctx->pc) {
        case 0x19d960u: goto label_19d960;
        default: break;
    }

    ctx->pc = 0x19d950u;

    // 0x19d950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d958: 0xc06fee0  jal         func_1BFB80
    ctx->pc = 0x19D958u;
    SET_GPR_U32(ctx, 31, 0x19D960u);
    ctx->pc = 0x1BFB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB80u, 0x19D958u, 0x19D960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D960u;
label_19d960:
    // 0x19d960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d964: 0x3e00008  jr          $ra
    ctx->pc = 0x19D964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D964u;
        // 0x19d968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D96Cu;
    // 0x19d96c: 0x0  nop
    ctx->pc = 0x19d96cu;
    // NOP
    ctx->pc = 0x19d970u;
}
