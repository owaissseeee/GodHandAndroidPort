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

// Function: Tramp__IO_default_doallocate_38B368
// Address: 0x38b368 - 0x38b388
void Tramp__IO_default_doallocate_38B368_0x38b368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp__IO_default_doallocate_38B368_0x38b368");
#endif

    switch (ctx->pc) {
        case 0x38b378u: goto label_38b378;
        default: break;
    }

    ctx->pc = 0x38b368u;

    // 0x38b368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38b368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38b36c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38b36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38b370: 0xc0e32fc  jal         func_38CBF0
    ctx->pc = 0x38B370u;
    SET_GPR_U32(ctx, 31, 0x38B378u);
    ctx->pc = 0x38CBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CBF0u, 0x38B370u, 0x38B378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B378u;
label_38b378:
    // 0x38b378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38b378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b37c: 0x3e00008  jr          $ra
    ctx->pc = 0x38B37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B37Cu;
        // 0x38b380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B384u;
    // 0x38b384: 0x0  nop
    ctx->pc = 0x38b384u;
    // NOP
    ctx->pc = 0x38b388u;
}
