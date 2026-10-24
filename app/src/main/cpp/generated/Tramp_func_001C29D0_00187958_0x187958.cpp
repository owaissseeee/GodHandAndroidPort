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

// Function: Tramp_func_001C29D0_00187958
// Address: 0x187958 - 0x187978
void Tramp_func_001C29D0_00187958_0x187958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001C29D0_00187958_0x187958");
#endif

    switch (ctx->pc) {
        case 0x187968u: goto label_187968;
        default: break;
    }

    ctx->pc = 0x187958u;

    // 0x187958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18795c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18795cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187960: 0xc070a74  jal         func_1C29D0
    ctx->pc = 0x187960u;
    SET_GPR_U32(ctx, 31, 0x187968u);
    ctx->pc = 0x1C29D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C29D0u, 0x187960u, 0x187968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187968u;
label_187968:
    // 0x187968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18796c: 0x3e00008  jr          $ra
    ctx->pc = 0x18796Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18796Cu;
        // 0x187970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18796Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187974u;
    // 0x187974: 0x0  nop
    ctx->pc = 0x187974u;
    // NOP
    ctx->pc = 0x187978u;
}
