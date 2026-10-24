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

// Function: Tramp_func_002AAC28_0013C508
// Address: 0x13c508 - 0x13c528
void Tramp_func_002AAC28_0013C508_0x13c508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_002AAC28_0013C508_0x13c508");
#endif

    switch (ctx->pc) {
        case 0x13c518u: goto label_13c518;
        default: break;
    }

    ctx->pc = 0x13c508u;

    // 0x13c508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13c508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13c50c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c510: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x13C510u;
    SET_GPR_U32(ctx, 31, 0x13C518u);
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x13C510u, 0x13C518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C518u;
label_13c518:
    // 0x13c518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c51c: 0x3e00008  jr          $ra
    ctx->pc = 0x13C51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C51Cu;
        // 0x13c520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C524u;
    // 0x13c524: 0x0  nop
    ctx->pc = 0x13c524u;
    // NOP
    ctx->pc = 0x13c528u;
}
