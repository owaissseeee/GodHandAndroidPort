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

// Function: func_002E1710
// Address: 0x2e1710 - 0x2e1730
void func_002E1710_0x2e1710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E1710_0x2e1710");
#endif

    switch (ctx->pc) {
        case 0x2e1720u: goto label_2e1720;
        default: break;
    }

    ctx->pc = 0x2e1710u;

    // 0x2e1710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e1710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e1714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1718: 0xc0befb4  jal         func_2FBED0
    ctx->pc = 0x2E1718u;
    SET_GPR_U32(ctx, 31, 0x2E1720u);
    ctx->pc = 0x2FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBED0u, 0x2E1718u, 0x2E1720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1720u;
label_2e1720:
    // 0x2e1720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1724: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1724u;
        // 0x2e1728: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E172Cu;
    // 0x2e172c: 0x0  nop
    ctx->pc = 0x2e172cu;
    // NOP
    ctx->pc = 0x2e1730u;
}
