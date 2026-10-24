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

// Function: Tramp_func_001BC0A0_00191F30
// Address: 0x191f30 - 0x191f50
void Tramp_func_001BC0A0_00191F30_0x191f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001BC0A0_00191F30_0x191f30");
#endif

    switch (ctx->pc) {
        case 0x191f40u: goto label_191f40;
        default: break;
    }

    ctx->pc = 0x191f30u;

    // 0x191f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x191f34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191f38: 0xc06f028  jal         func_1BC0A0
    ctx->pc = 0x191F38u;
    SET_GPR_U32(ctx, 31, 0x191F40u);
    ctx->pc = 0x1BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC0A0u, 0x191F38u, 0x191F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191F40u;
label_191f40:
    // 0x191f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191f44: 0x3e00008  jr          $ra
    ctx->pc = 0x191F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F44u;
        // 0x191f48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191F4Cu;
    // 0x191f4c: 0x0  nop
    ctx->pc = 0x191f4cu;
    // NOP
    ctx->pc = 0x191f50u;
}
