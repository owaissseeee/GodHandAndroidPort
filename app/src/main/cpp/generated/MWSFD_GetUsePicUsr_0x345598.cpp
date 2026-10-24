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

// Function: MWSFD_GetUsePicUsr
// Address: 0x345598 - 0x3455b8
void MWSFD_GetUsePicUsr_0x345598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MWSFD_GetUsePicUsr_0x345598");
#endif

    switch (ctx->pc) {
        case 0x3455a8u: goto label_3455a8;
        default: break;
    }

    ctx->pc = 0x345598u;

    // 0x345598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x345598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34559c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34559cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3455a0: 0xc0d14ac  jal         func_3452B0
    ctx->pc = 0x3455A0u;
    SET_GPR_U32(ctx, 31, 0x3455A8u);
    ctx->pc = 0x3452B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3452B0u, 0x3455A0u, 0x3455A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3455A8u;
label_3455a8:
    // 0x3455a8: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x3455a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x3455ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3455acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3455b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3455B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3455B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3455B0u;
        // 0x3455b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3455B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3455B8u;
}
