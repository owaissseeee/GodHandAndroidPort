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

// Function: MWSFD_GetReqSvrBdrLib
// Address: 0x349778 - 0x3497a0
void MWSFD_GetReqSvrBdrLib_0x349778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MWSFD_GetReqSvrBdrLib_0x349778");
#endif

    switch (ctx->pc) {
        case 0x349788u: goto label_349788;
        default: break;
    }

    ctx->pc = 0x349778u;

    // 0x349778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34977c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34977cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349780: 0xc0d14ac  jal         func_3452B0
    ctx->pc = 0x349780u;
    SET_GPR_U32(ctx, 31, 0x349788u);
    ctx->pc = 0x3452B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3452B0u, 0x349780u, 0x349788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349788u;
label_349788:
    // 0x349788: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x349788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x34978c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34978cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349790: 0x3e00008  jr          $ra
    ctx->pc = 0x349790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349790u;
        // 0x349794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349798u;
    // 0x349798: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x349798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34979c: 0x0  nop
    ctx->pc = 0x34979cu;
    // NOP
    ctx->pc = 0x3497a0u;
}
