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
// Function: initPlay__12cEventVertex
// Address: 0x7b2280 - 0x7b22a0
void initPlay__12cEventVertex_0x7b2280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initPlay__12cEventVertex_0x7b2280");
#endif

    switch (ctx->pc) {
        case 0x7b2294u: goto label_7b2294;
        default: break;
    }

    ctx->pc = 0x7b2280u;

    // 0x7b2280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7b2280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7b2284: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7b2284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
    // 0x7b2288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b2288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b228c: 0xc1eccd0  jal         func_7B3340
    ctx->pc = 0x7B228Cu;
    SET_GPR_U32(ctx, 31, 0x7B2294u);
    ctx->pc = 0x7B2290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B228Cu;
    // 0x7b2290: 0x24a54ee8  addiu       $a1, $a1, 0x4EE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B3340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B3340u, 0x7B228Cu, 0x7B2294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2294u;
label_7b2294:
    // 0x7b2294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b2294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b2298: 0x3e00008  jr          $ra
    ctx->pc = 0x7B2298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2298u;
        // 0x7b229c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B2298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B22A0u;
}
} // namespace gh_event
