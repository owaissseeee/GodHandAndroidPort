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

// Function: func_003506E0
// Address: 0x3506e0 - 0x350700
void func_003506E0_0x3506e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003506E0_0x3506e0");
#endif

    switch (ctx->pc) {
        case 0x3506f0u: goto label_3506f0;
        default: break;
    }

    ctx->pc = 0x3506e0u;

    // 0x3506e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3506e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3506e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3506e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3506e8: 0xc0db088  jal         func_36C220
    ctx->pc = 0x3506E8u;
    SET_GPR_U32(ctx, 31, 0x3506F0u);
    ctx->pc = 0x36C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C220u, 0x3506E8u, 0x3506F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3506F0u;
label_3506f0:
    // 0x3506f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3506f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3506f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3506f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3506f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3506F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3506FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3506F8u;
        // 0x3506fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3506F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350700u;
}
