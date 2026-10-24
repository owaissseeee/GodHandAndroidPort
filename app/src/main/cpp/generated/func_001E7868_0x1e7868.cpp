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

// Function: func_001E7868
// Address: 0x1e7868 - 0x1e7888
void func_001E7868_0x1e7868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E7868_0x1e7868");
#endif

    switch (ctx->pc) {
        case 0x1e7878u: goto label_1e7878;
        default: break;
    }

    ctx->pc = 0x1e7868u;

    // 0x1e7868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e786c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e786cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7870: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1E7870u;
    SET_GPR_U32(ctx, 31, 0x1E7878u);
    ctx->pc = 0x1E7874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7870u;
    // 0x1e7874: 0x24840240  addiu       $a0, $a0, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1E7870u, 0x1E7878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7878u;
label_1e7878:
    // 0x1e7878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e787c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E787Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E787Cu;
        // 0x1e7880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E787Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7884u;
    // 0x1e7884: 0x0  nop
    ctx->pc = 0x1e7884u;
    // NOP
    ctx->pc = 0x1e7888u;
}
