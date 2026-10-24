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
// Function: __eh_alloc
// Address: 0x7c9f48 - 0x7c9f70
void ps2___eh_alloc_0x7c9f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___eh_alloc_0x7c9f48");
#endif

    switch (ctx->pc) {
        case 0x7c9f58u: goto label_7c9f58;
        case 0x7c9f68u: goto label_7c9f68;
        default: break;
    }

    ctx->pc = 0x7c9f48u;

    // 0x7c9f48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c9f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c9f4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c9f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c9f50: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x7C9F50u;
    SET_GPR_U32(ctx, 31, 0x7C9F58u);
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x7C9F50u, 0x7C9F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9F58u;
label_7c9f58:
    // 0x7c9f58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C9F58u;
    {
        const bool branch_taken_0x7c9f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C9F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9F58u;
        // 0x7c9f5c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9f58) {
            ctx->pc = 0x7C9F68u;
            goto label_7c9f68;
        }
    }
    ctx->pc = 0x7C9F60u;
    // 0x7c9f60: 0xc1f279a  jal         func_7C9E68
    ctx->pc = 0x7C9F60u;
    SET_GPR_U32(ctx, 31, 0x7C9F68u);
    ctx->pc = 0x7C9E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9E68u, 0x7C9F60u, 0x7C9F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9F68u;
label_7c9f68:
    // 0x7c9f68: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9F68u;
        // 0x7c9f6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9F70u;
}
} // namespace gh_mcport
