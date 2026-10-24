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

// Function: func_00349308
// Address: 0x349308 - 0x349328
void func_00349308_0x349308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00349308_0x349308");
#endif

    switch (ctx->pc) {
        case 0x349318u: goto label_349318;
        default: break;
    }

    ctx->pc = 0x349308u;

    // 0x349308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34930c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34930cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349310: 0xc0d24ca  jal         func_349328
    ctx->pc = 0x349310u;
    SET_GPR_U32(ctx, 31, 0x349318u);
    ctx->pc = 0x349328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349328u, 0x349310u, 0x349318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349318u;
label_349318:
    // 0x349318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34931c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34931cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349320: 0x3e00008  jr          $ra
    ctx->pc = 0x349320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349320u;
        // 0x349324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349328u;
}
