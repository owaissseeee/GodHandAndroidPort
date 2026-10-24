#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __eh_free
// Address: 0x7c9f70 - 0x7c9f90
void ps2___eh_free_0x7c9f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___eh_free_0x7c9f70");
#endif

    switch (ctx->pc) {
        case 0x7c9f80u: goto label_7c9f80;
        default: break;
    }

    ctx->pc = 0x7c9f70u;

    // 0x7c9f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c9f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c9f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c9f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c9f78: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x7C9F78u;
    SET_GPR_U32(ctx, 31, 0x7C9F80u);
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x7C9F78u, 0x7C9F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9F80u;
label_7c9f80:
    // 0x7c9f80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c9f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c9f84: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9F84u;
        // 0x7c9f88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9F8Cu;
    // 0x7c9f8c: 0x0  nop
    ctx->pc = 0x7c9f8cu;
    // NOP
    ctx->pc = 0x7c9f90u;
}
} // namespace gh_mcport
