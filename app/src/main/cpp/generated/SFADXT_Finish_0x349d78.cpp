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

// Function: SFADXT_Finish
// Address: 0x349d78 - 0x349da0
void SFADXT_Finish_0x349d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFADXT_Finish_0x349d78");
#endif

    switch (ctx->pc) {
        case 0x349d88u: goto label_349d88;
        case 0x349d90u: goto label_349d90;
        default: break;
    }

    ctx->pc = 0x349d78u;

    // 0x349d78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349d7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349d80: 0xc0ee760  jal         func_3B9D80
    ctx->pc = 0x349D80u;
    SET_GPR_U32(ctx, 31, 0x349D88u);
    ctx->pc = 0x3B9D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9D80u, 0x349D80u, 0x349D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349D88u;
label_349d88:
    // 0x349d88: 0xc0c92b2  jal         func_324AC8
    ctx->pc = 0x349D88u;
    SET_GPR_U32(ctx, 31, 0x349D90u);
    ctx->pc = 0x324AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324AC8u, 0x349D88u, 0x349D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349D90u;
label_349d90:
    // 0x349d90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x349d90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349d94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349d98: 0x3e00008  jr          $ra
    ctx->pc = 0x349D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349D98u;
        // 0x349d9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349DA0u;
}
