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
// Function: initPlay__9cEventBgm
// Address: 0x7ac758 - 0x7ac788
void initPlay__9cEventBgm_0x7ac758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initPlay__9cEventBgm_0x7ac758");
#endif

    switch (ctx->pc) {
        case 0x7ac76cu: goto label_7ac76c;
        case 0x7ac77cu: goto label_7ac77c;
        default: break;
    }

    ctx->pc = 0x7ac758u;

    // 0x7ac758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7ac758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7ac75c: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7ac75cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
    // 0x7ac760: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ac760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ac764: 0xc1ed21c  jal         func_7B4870
    ctx->pc = 0x7AC764u;
    SET_GPR_U32(ctx, 31, 0x7AC76Cu);
    ctx->pc = 0x7AC768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC764u;
    // 0x7ac768: 0x24a54e50  addiu       $a1, $a1, 0x4E50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B4870u, 0x7AC764u, 0x7AC76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC76Cu;
label_7ac76c:
    // 0x7ac76c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7ac76cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7ac770: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7ac770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ac774: 0xc0b4600  jal         func_2D1800
    ctx->pc = 0x7AC774u;
    SET_GPR_U32(ctx, 31, 0x7AC77Cu);
    ctx->pc = 0x7AC778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC774u;
    // 0x7ac778: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1800u, 0x7AC774u, 0x7AC77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC77Cu;
label_7ac77c:
    // 0x7ac77c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ac77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ac780: 0x3e00008  jr          $ra
    ctx->pc = 0x7AC780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AC784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC780u;
        // 0x7ac784: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AC780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AC788u;
}
} // namespace gh_event
