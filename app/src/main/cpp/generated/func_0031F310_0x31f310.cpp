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

// Function: func_0031F310
// Address: 0x31f310 - 0x31f330
void func_0031F310_0x31f310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031F310_0x31f310");
#endif

    switch (ctx->pc) {
        case 0x31f320u: goto label_31f320;
        default: break;
    }

    ctx->pc = 0x31f310u;

    // 0x31f310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31f310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31f314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31f318: 0xc0c7b84  jal         func_31EE10
    ctx->pc = 0x31F318u;
    SET_GPR_U32(ctx, 31, 0x31F320u);
    ctx->pc = 0x31EE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EE10u, 0x31F318u, 0x31F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F320u;
label_31f320:
    // 0x31f320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31f320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f324: 0x3e00008  jr          $ra
    ctx->pc = 0x31F324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F324u;
        // 0x31f328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F32Cu;
    // 0x31f32c: 0x0  nop
    ctx->pc = 0x31f32cu;
    // NOP
    ctx->pc = 0x31f330u;
}
