#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: setName__21cEventSeqPlayerCommonPc
// Address: 0x7b1d58 - 0x7b1d78
void setName__21cEventSeqPlayerCommonPc_0x7b1d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setName__21cEventSeqPlayerCommonPc_0x7b1d58");
#endif

    switch (ctx->pc) {
        case 0x7b1d68u: goto label_7b1d68;
        default: break;
    }

    ctx->pc = 0x7b1d58u;

    // 0x7b1d58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7b1d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7b1d5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b1d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b1d60: 0xc0e95f1  jal         func_3A57C4
    ctx->pc = 0x7B1D60u;
    SET_GPR_U32(ctx, 31, 0x7B1D68u);
    ctx->pc = 0x3A57C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57C4u, 0x7B1D60u, 0x7B1D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1D68u;
label_7b1d68:
    // 0x7b1d68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b1d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b1d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x7B1D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B1D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1D6Cu;
        // 0x7b1d70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B1D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B1D74u;
    // 0x7b1d74: 0x0  nop
    ctx->pc = 0x7b1d74u;
    // NOP
    ctx->pc = 0x7b1d78u;
}
} // namespace gh_event
