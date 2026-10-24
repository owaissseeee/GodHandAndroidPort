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

// Function: func_0038B648
// Address: 0x38b648 - 0x38b668
void func_0038B648_0x38b648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038B648_0x38b648");
#endif

    switch (ctx->pc) {
        case 0x38b658u: goto label_38b658;
        default: break;
    }

    ctx->pc = 0x38b648u;

    // 0x38b648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38b648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38b64c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38b64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38b650: 0xc0e3450  jal         func_38D140
    ctx->pc = 0x38B650u;
    SET_GPR_U32(ctx, 31, 0x38B658u);
    ctx->pc = 0x38D140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D140u, 0x38B650u, 0x38B658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B658u;
label_38b658:
    // 0x38b658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38b658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b65c: 0x3e00008  jr          $ra
    ctx->pc = 0x38B65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B65Cu;
        // 0x38b660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B664u;
    // 0x38b664: 0x0  nop
    ctx->pc = 0x38b664u;
    // NOP
    ctx->pc = 0x38b668u;
}
