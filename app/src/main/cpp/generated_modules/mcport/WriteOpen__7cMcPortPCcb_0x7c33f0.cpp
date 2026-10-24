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
// Function: WriteOpen__7cMcPortPCcb
// Address: 0x7c33f0 - 0x7c3410
void WriteOpen__7cMcPortPCcb_0x7c33f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WriteOpen__7cMcPortPCcb_0x7c33f0");
#endif

    switch (ctx->pc) {
        case 0x7c3404u: goto label_7c3404;
        default: break;
    }

    ctx->pc = 0x7c33f0u;

    // 0x7c33f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c33f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c33f4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x7c33f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c33f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c33f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c33fc: 0xc1f0cc0  jal         func_7C3300
    ctx->pc = 0x7C33FCu;
    SET_GPR_U32(ctx, 31, 0x7C3404u);
    ctx->pc = 0x7C3400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C33FCu;
    // 0x7c3400: 0x24060202  addiu       $a2, $zero, 0x202 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3300u, 0x7C33FCu, 0x7C3404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3404u;
label_7c3404:
    // 0x7c3404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c3404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c3408: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3408u;
        // 0x7c340c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C3410u;
}
} // namespace gh_mcport
