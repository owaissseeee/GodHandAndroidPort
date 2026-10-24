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

// Function: func_001E7888
// Address: 0x1e7888 - 0x1e78a8
void func_001E7888_0x1e7888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E7888_0x1e7888");
#endif

    switch (ctx->pc) {
        case 0x1e7898u: goto label_1e7898;
        default: break;
    }

    ctx->pc = 0x1e7888u;

    // 0x1e7888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e788c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e788cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7890: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1E7890u;
    SET_GPR_U32(ctx, 31, 0x1E7898u);
    ctx->pc = 0x1E7894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7890u;
    // 0x1e7894: 0x248402bc  addiu       $a0, $a0, 0x2BC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 700));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1E7890u, 0x1E7898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7898u;
label_1e7898:
    // 0x1e7898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e789c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E789Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E78A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E789Cu;
        // 0x1e78a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E789Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E78A4u;
    // 0x1e78a4: 0x0  nop
    ctx->pc = 0x1e78a4u;
    // NOP
    ctx->pc = 0x1e78a8u;
}
