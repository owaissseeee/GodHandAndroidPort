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

// Function: func_00320160
// Address: 0x320160 - 0x320180
void func_00320160_0x320160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00320160_0x320160");
#endif

    switch (ctx->pc) {
        case 0x320170u: goto label_320170;
        default: break;
    }

    ctx->pc = 0x320160u;

    // 0x320160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x320164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x320168: 0xc0c7b84  jal         func_31EE10
    ctx->pc = 0x320168u;
    SET_GPR_U32(ctx, 31, 0x320170u);
    ctx->pc = 0x31EE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EE10u, 0x320168u, 0x320170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320170u;
label_320170:
    // 0x320170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320174: 0x3e00008  jr          $ra
    ctx->pc = 0x320174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320174u;
        // 0x320178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32017Cu;
    // 0x32017c: 0x0  nop
    ctx->pc = 0x32017cu;
    // NOP
    ctx->pc = 0x320180u;
}
