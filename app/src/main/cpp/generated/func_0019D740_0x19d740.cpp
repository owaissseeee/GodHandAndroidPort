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

// Function: func_0019D740
// Address: 0x19d740 - 0x19d760
void func_0019D740_0x19d740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019D740_0x19d740");
#endif

    switch (ctx->pc) {
        case 0x19d750u: goto label_19d750;
        default: break;
    }

    ctx->pc = 0x19d740u;

    // 0x19d740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d748: 0xc06fee0  jal         func_1BFB80
    ctx->pc = 0x19D748u;
    SET_GPR_U32(ctx, 31, 0x19D750u);
    ctx->pc = 0x1BFB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB80u, 0x19D748u, 0x19D750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D750u;
label_19d750:
    // 0x19d750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d754: 0x3e00008  jr          $ra
    ctx->pc = 0x19D754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D754u;
        // 0x19d758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D75Cu;
    // 0x19d75c: 0x0  nop
    ctx->pc = 0x19d75cu;
    // NOP
    ctx->pc = 0x19d760u;
}
