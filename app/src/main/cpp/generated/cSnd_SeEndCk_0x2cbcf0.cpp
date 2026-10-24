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

// Function: cSnd_SeEndCk
// Address: 0x2cbcf0 - 0x2cbd10
void cSnd_SeEndCk_0x2cbcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_SeEndCk_0x2cbcf0");
#endif

    switch (ctx->pc) {
        case 0x2cbd00u: goto label_2cbd00;
        default: break;
    }

    ctx->pc = 0x2cbcf0u;

    // 0x2cbcf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cbcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cbcf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cbcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cbcf8: 0xc0b2fd2  jal         func_2CBF48
    ctx->pc = 0x2CBCF8u;
    SET_GPR_U32(ctx, 31, 0x2CBD00u);
    ctx->pc = 0x2CBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBF48u, 0x2CBCF8u, 0x2CBD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD00u;
label_2cbd00:
    // 0x2cbd00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cbd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbd04: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2cbd04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2cbd08: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD08u;
        // 0x2cbd0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBD10u;
}
