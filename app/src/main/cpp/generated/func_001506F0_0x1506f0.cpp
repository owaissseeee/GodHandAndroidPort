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

// Function: func_001506F0
// Address: 0x1506f0 - 0x150710
void func_001506F0_0x1506f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001506F0_0x1506f0");
#endif

    switch (ctx->pc) {
        case 0x150700u: goto label_150700;
        default: break;
    }

    ctx->pc = 0x1506f0u;

    // 0x1506f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1506f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1506f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1506f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1506f8: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x1506F8u;
    SET_GPR_U32(ctx, 31, 0x150700u);
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x1506F8u, 0x150700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150700u;
label_150700:
    // 0x150700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150704: 0x3e00008  jr          $ra
    ctx->pc = 0x150704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150704u;
        // 0x150708: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15070Cu;
    // 0x15070c: 0x0  nop
    ctx->pc = 0x15070cu;
    // NOP
    ctx->pc = 0x150710u;
}
