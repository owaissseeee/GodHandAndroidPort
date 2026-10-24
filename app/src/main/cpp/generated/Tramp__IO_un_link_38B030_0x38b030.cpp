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

// Function: Tramp__IO_un_link_38B030
// Address: 0x38b030 - 0x38b050
void Tramp__IO_un_link_38B030_0x38b030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp__IO_un_link_38B030_0x38b030");
#endif

    switch (ctx->pc) {
        case 0x38b040u: goto label_38b040;
        default: break;
    }

    ctx->pc = 0x38b030u;

    // 0x38b030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38b030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38b034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38b034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38b038: 0xc0e306a  jal         func_38C1A8
    ctx->pc = 0x38B038u;
    SET_GPR_U32(ctx, 31, 0x38B040u);
    ctx->pc = 0x38C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C1A8u, 0x38B038u, 0x38B040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B040u;
label_38b040:
    // 0x38b040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38b040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b044: 0x3e00008  jr          $ra
    ctx->pc = 0x38B044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B044u;
        // 0x38b048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B04Cu;
    // 0x38b04c: 0x0  nop
    ctx->pc = 0x38b04cu;
    // NOP
    ctx->pc = 0x38b050u;
}
