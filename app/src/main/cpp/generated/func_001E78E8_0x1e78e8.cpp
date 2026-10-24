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

// Function: func_001E78E8
// Address: 0x1e78e8 - 0x1e7908
void func_001E78E8_0x1e78e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E78E8_0x1e78e8");
#endif

    switch (ctx->pc) {
        case 0x1e78f8u: goto label_1e78f8;
        default: break;
    }

    ctx->pc = 0x1e78e8u;

    // 0x1e78e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e78e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e78ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e78ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e78f0: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1E78F0u;
    SET_GPR_U32(ctx, 31, 0x1E78F8u);
    ctx->pc = 0x1E78F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E78F0u;
    // 0x1e78f4: 0x24840430  addiu       $a0, $a0, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1E78F0u, 0x1E78F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E78F8u;
label_1e78f8:
    // 0x1e78f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e78f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e78fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E78FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78FCu;
        // 0x1e7900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E78FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7904u;
    // 0x1e7904: 0x0  nop
    ctx->pc = 0x1e7904u;
    // NOP
    ctx->pc = 0x1e7908u;
}
