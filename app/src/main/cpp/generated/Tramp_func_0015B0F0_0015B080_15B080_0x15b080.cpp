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

// Function: Tramp_func_0015B0F0_0015B080_15B080
// Address: 0x15b080 - 0x15b0a0
void Tramp_func_0015B0F0_0015B080_15B080_0x15b080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_0015B0F0_0015B080_15B080_0x15b080");
#endif

    switch (ctx->pc) {
        case 0x15b090u: goto label_15b090;
        default: break;
    }

    ctx->pc = 0x15b080u;

    // 0x15b080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15b080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15b084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15b084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15b088: 0xc056c3c  jal         func_15B0F0
    ctx->pc = 0x15B088u;
    SET_GPR_U32(ctx, 31, 0x15B090u);
    ctx->pc = 0x15B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0F0u, 0x15B088u, 0x15B090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B090u;
label_15b090:
    // 0x15b090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b094: 0x3e00008  jr          $ra
    ctx->pc = 0x15B094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B094u;
        // 0x15b098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B09Cu;
    // 0x15b09c: 0x0  nop
    ctx->pc = 0x15b09cu;
    // NOP
    ctx->pc = 0x15b0a0u;
}
