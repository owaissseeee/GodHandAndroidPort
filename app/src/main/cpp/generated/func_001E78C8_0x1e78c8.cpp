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

// Function: func_001E78C8
// Address: 0x1e78c8 - 0x1e78e8
void func_001E78C8_0x1e78c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E78C8_0x1e78c8");
#endif

    switch (ctx->pc) {
        case 0x1e78d8u: goto label_1e78d8;
        default: break;
    }

    ctx->pc = 0x1e78c8u;

    // 0x1e78c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e78c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e78cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e78ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e78d0: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1E78D0u;
    SET_GPR_U32(ctx, 31, 0x1E78D8u);
    ctx->pc = 0x1E78D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E78D0u;
    // 0x1e78d4: 0x248403b4  addiu       $a0, $a0, 0x3B4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 948));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1E78D0u, 0x1E78D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E78D8u;
label_1e78d8:
    // 0x1e78d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e78d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e78dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E78DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E78E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78DCu;
        // 0x1e78e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E78DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E78E4u;
    // 0x1e78e4: 0x0  nop
    ctx->pc = 0x1e78e4u;
    // NOP
    ctx->pc = 0x1e78e8u;
}
