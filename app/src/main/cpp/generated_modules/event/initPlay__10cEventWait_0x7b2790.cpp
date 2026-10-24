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
// Function: initPlay__10cEventWait
// Address: 0x7b2790 - 0x7b27b8
void initPlay__10cEventWait_0x7b2790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initPlay__10cEventWait_0x7b2790");
#endif

    switch (ctx->pc) {
        case 0x7b27a4u: goto label_7b27a4;
        case 0x7b27acu: goto label_7b27ac;
        default: break;
    }

    ctx->pc = 0x7b2790u;

    // 0x7b2790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7b2790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7b2794: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7b2794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
    // 0x7b2798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b2798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b279c: 0xc1ecadc  jal         func_7B2B70
    ctx->pc = 0x7B279Cu;
    SET_GPR_U32(ctx, 31, 0x7B27A4u);
    ctx->pc = 0x7B27A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B279Cu;
    // 0x7b27a0: 0x24a54ef8  addiu       $a1, $a1, 0x4EF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B2B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B2B70u, 0x7B279Cu, 0x7B27A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B27A4u;
label_7b27a4:
    // 0x7b27a4: 0xc0c345a  jal         func_30D168
    ctx->pc = 0x7B27A4u;
    SET_GPR_U32(ctx, 31, 0x7B27ACu);
    ctx->pc = 0x7B27A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B27A4u;
    // 0x7b27a8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D168u, 0x7B27A4u, 0x7B27ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B27ACu;
label_7b27ac:
    // 0x7b27ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b27acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b27b0: 0x3e00008  jr          $ra
    ctx->pc = 0x7B27B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B27B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B27B0u;
        // 0x7b27b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B27B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B27B8u;
}
} // namespace gh_event
