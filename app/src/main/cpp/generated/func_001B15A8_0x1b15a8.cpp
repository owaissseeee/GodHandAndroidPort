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

// Function: func_001B15A8
// Address: 0x1b15a8 - 0x1b15c8
void func_001B15A8_0x1b15a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B15A8_0x1b15a8");
#endif

    switch (ctx->pc) {
        case 0x1b15bcu: goto label_1b15bc;
        default: break;
    }

    ctx->pc = 0x1b15a8u;

    // 0x1b15a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b15a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b15ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b15acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b15b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b15b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b15b4: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x1B15B4u;
    SET_GPR_U32(ctx, 31, 0x1B15BCu);
    ctx->pc = 0x1B15B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B15B4u;
    // 0x1b15b8: 0xa0820531  sb          $v0, 0x531($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 1329), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x1B15B4u, 0x1B15BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B15BCu;
label_1b15bc:
    // 0x1b15bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b15bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b15c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B15C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15C0u;
        // 0x1b15c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B15C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B15C8u;
}
