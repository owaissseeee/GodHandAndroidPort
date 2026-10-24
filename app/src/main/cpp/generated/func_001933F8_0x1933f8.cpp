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

// Function: func_001933F8
// Address: 0x1933f8 - 0x193418
void func_001933F8_0x1933f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001933F8_0x1933f8");
#endif

    switch (ctx->pc) {
        case 0x193408u: goto label_193408;
        default: break;
    }

    ctx->pc = 0x1933f8u;

    // 0x1933f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1933f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1933fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1933fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193400: 0xc070a74  jal         func_1C29D0
    ctx->pc = 0x193400u;
    SET_GPR_U32(ctx, 31, 0x193408u);
    ctx->pc = 0x1C29D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C29D0u, 0x193400u, 0x193408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193408u;
label_193408:
    // 0x193408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19340c: 0x3e00008  jr          $ra
    ctx->pc = 0x19340Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19340Cu;
        // 0x193410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19340Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193414u;
    // 0x193414: 0x0  nop
    ctx->pc = 0x193414u;
    // NOP
    ctx->pc = 0x193418u;
}
