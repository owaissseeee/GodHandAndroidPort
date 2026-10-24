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

// Function: Tramp_flush__7ostream_3892C0
// Address: 0x3892c0 - 0x3892e0
void Tramp_flush__7ostream_3892C0_0x3892c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_flush__7ostream_3892C0_0x3892c0");
#endif

    switch (ctx->pc) {
        case 0x3892d0u: goto label_3892d0;
        default: break;
    }

    ctx->pc = 0x3892c0u;

    // 0x3892c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3892c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3892c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3892c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3892c8: 0xc0e249a  jal         func_389268
    ctx->pc = 0x3892C8u;
    SET_GPR_U32(ctx, 31, 0x3892D0u);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x3892C8u, 0x3892D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3892D0u;
label_3892d0:
    // 0x3892d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3892d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3892d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3892D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3892D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3892D4u;
        // 0x3892d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3892D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3892DCu;
    // 0x3892dc: 0x0  nop
    ctx->pc = 0x3892dcu;
    // NOP
    ctx->pc = 0x3892e0u;
}
