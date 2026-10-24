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

// Function: Tramp__IO_marker_delta_38B608
// Address: 0x38b608 - 0x38b628
void Tramp__IO_marker_delta_38B608_0x38b608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp__IO_marker_delta_38B608_0x38b608");
#endif

    switch (ctx->pc) {
        case 0x38b618u: goto label_38b618;
        default: break;
    }

    ctx->pc = 0x38b608u;

    // 0x38b608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38b608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38b60c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38b60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38b610: 0xc0e3420  jal         func_38D080
    ctx->pc = 0x38B610u;
    SET_GPR_U32(ctx, 31, 0x38B618u);
    ctx->pc = 0x38D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D080u, 0x38B610u, 0x38B618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B618u;
label_38b618:
    // 0x38b618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38b618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b61c: 0x3e00008  jr          $ra
    ctx->pc = 0x38B61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B61Cu;
        // 0x38b620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B624u;
    // 0x38b624: 0x0  nop
    ctx->pc = 0x38b624u;
    // NOP
    ctx->pc = 0x38b628u;
}
