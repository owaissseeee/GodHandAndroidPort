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

// Function: espSys_effDataRegist
// Address: 0x305758 - 0x305778
void espSys_effDataRegist_0x305758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("espSys_effDataRegist_0x305758");
#endif

    switch (ctx->pc) {
        case 0x305768u: goto label_305768;
        default: break;
    }

    ctx->pc = 0x305758u;

    // 0x305758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x305758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30575c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30575cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x305760: 0xc0c1642  jal         func_305908
    ctx->pc = 0x305760u;
    SET_GPR_U32(ctx, 31, 0x305768u);
    ctx->pc = 0x305908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305908u, 0x305760u, 0x305768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305768u;
label_305768:
    // 0x305768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x305768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30576c: 0x3e00008  jr          $ra
    ctx->pc = 0x30576Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30576Cu;
        // 0x305770: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30576Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305774u;
    // 0x305774: 0x0  nop
    ctx->pc = 0x305774u;
    // NOP
    ctx->pc = 0x305778u;
}
