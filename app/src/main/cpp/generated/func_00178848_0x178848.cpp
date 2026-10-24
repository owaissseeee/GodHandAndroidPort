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

// Function: func_00178848
// Address: 0x178848 - 0x178870
void func_00178848_0x178848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00178848_0x178848");
#endif

    switch (ctx->pc) {
        case 0x178864u: goto label_178864;
        default: break;
    }

    ctx->pc = 0x178848u;

    // 0x178848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17884c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x17884cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x178850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178854: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x178854u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178858: 0x24421590  addiu       $v0, $v0, 0x1590
    ctx->pc = 0x178858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5520));
    // 0x17885c: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x17885Cu;
    SET_GPR_U32(ctx, 31, 0x178864u);
    ctx->pc = 0x178860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17885Cu;
    // 0x178860: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x17885Cu, 0x178864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178864u;
label_178864:
    // 0x178864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178868: 0x3e00008  jr          $ra
    ctx->pc = 0x178868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178868u;
        // 0x17886c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178870u;
}
