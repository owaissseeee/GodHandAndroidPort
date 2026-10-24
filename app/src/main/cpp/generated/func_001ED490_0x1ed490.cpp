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

// Function: func_001ED490
// Address: 0x1ed490 - 0x1ed4b0
void func_001ED490_0x1ed490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ED490_0x1ed490");
#endif

    switch (ctx->pc) {
        case 0x1ed4a0u: goto label_1ed4a0;
        default: break;
    }

    ctx->pc = 0x1ed490u;

    // 0x1ed490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ed490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ed494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed498: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1ED498u;
    SET_GPR_U32(ctx, 31, 0x1ED4A0u);
    ctx->pc = 0x1ED49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED498u;
    // 0x1ed49c: 0x2484124c  addiu       $a0, $a0, 0x124C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4684));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1ED498u, 0x1ED4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED4A0u;
label_1ed4a0:
    // 0x1ed4a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4A4u;
        // 0x1ed4a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED4ACu;
    // 0x1ed4ac: 0x0  nop
    ctx->pc = 0x1ed4acu;
    // NOP
    ctx->pc = 0x1ed4b0u;
}
