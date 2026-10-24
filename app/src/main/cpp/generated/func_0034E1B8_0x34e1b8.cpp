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

// Function: func_0034E1B8
// Address: 0x34e1b8 - 0x34e1d8
void func_0034E1B8_0x34e1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034E1B8_0x34e1b8");
#endif

    switch (ctx->pc) {
        case 0x34e1c8u: goto label_34e1c8;
        default: break;
    }

    ctx->pc = 0x34e1b8u;

    // 0x34e1b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34e1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34e1bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34e1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34e1c0: 0xc0da37c  jal         func_368DF0
    ctx->pc = 0x34E1C0u;
    SET_GPR_U32(ctx, 31, 0x34E1C8u);
    ctx->pc = 0x368DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368DF0u, 0x34E1C0u, 0x34E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E1C8u;
label_34e1c8:
    // 0x34e1c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34e1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e1cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34e1ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x34E1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E1D0u;
        // 0x34e1d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E1D8u;
}
