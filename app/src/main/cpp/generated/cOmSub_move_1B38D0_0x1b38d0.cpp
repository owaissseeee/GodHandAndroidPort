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

// Function: cOmSub_move_1B38D0
// Address: 0x1b38d0 - 0x1b38f0
void cOmSub_move_1B38D0_0x1b38d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmSub_move_1B38D0_0x1b38d0");
#endif

    switch (ctx->pc) {
        case 0x1b38e0u: goto label_1b38e0;
        default: break;
    }

    ctx->pc = 0x1b38d0u;

    // 0x1b38d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b38d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b38d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b38d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b38d8: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x1B38D8u;
    SET_GPR_U32(ctx, 31, 0x1B38E0u);
    ctx->pc = 0x1B38DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B38D8u;
    // 0x1b38dc: 0x24840610  addiu       $a0, $a0, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x1B38D8u, 0x1B38E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B38E0u;
label_1b38e0:
    // 0x1b38e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b38e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b38e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B38E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B38E4u;
        // 0x1b38e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B38E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B38ECu;
    // 0x1b38ec: 0x0  nop
    ctx->pc = 0x1b38ecu;
    // NOP
    ctx->pc = 0x1b38f0u;
}
