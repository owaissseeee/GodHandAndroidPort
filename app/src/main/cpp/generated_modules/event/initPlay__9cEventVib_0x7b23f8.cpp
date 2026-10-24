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
// Function: initPlay__9cEventVib
// Address: 0x7b23f8 - 0x7b2418
void initPlay__9cEventVib_0x7b23f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initPlay__9cEventVib_0x7b23f8");
#endif

    switch (ctx->pc) {
        case 0x7b240cu: goto label_7b240c;
        default: break;
    }

    ctx->pc = 0x7b23f8u;

    // 0x7b23f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7b23f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7b23fc: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7b23fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
    // 0x7b2400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b2400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b2404: 0xc1ecbd6  jal         func_7B2F58
    ctx->pc = 0x7B2404u;
    SET_GPR_U32(ctx, 31, 0x7B240Cu);
    ctx->pc = 0x7B2408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2404u;
    // 0x7b2408: 0x24a54ef0  addiu       $a1, $a1, 0x4EF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B2F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B2F58u, 0x7B2404u, 0x7B240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B240Cu;
label_7b240c:
    // 0x7b240c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b240cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b2410: 0x3e00008  jr          $ra
    ctx->pc = 0x7B2410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2410u;
        // 0x7b2414: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B2410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B2418u;
}
} // namespace gh_event
